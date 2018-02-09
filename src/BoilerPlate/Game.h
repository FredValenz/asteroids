#pragma once
#ifndef _GAME_H_
#define _GAME_H_

//#include "Color.hpp"
#include "Ship.h"
//#include "ChangeColor.hpp"
#include "LoadModels.h"
#include "Vector2.h"
#include "Vector3.h"

namespace Asteroids
{
	class Game
	{
	public:
		/*============================
		*			STRUCT
		============================*/
		struct GameState
		{
			enum State
			{
				QUIT = 0,
				RUNNING = 1,
				//PAUSED = 2,
			};
		};

		/*============================
		*			CTOR
		============================*/
		Game();
		Game(int, int);
		~Game();

		/*============================
		*	  PUBLIC FUNCTIONS
		============================*/
		void Init();
		void Update(float);
		void Render();
		void ChangePlayerModel();
		int Finished();

		/*============================
		*		 PUBLIC MEMBERS
		============================*/
		Asteroids::Entities::Ship* m_player;

	private:

		/*============================
		*		 PRIVATE MEMBERS
		============================*/
		int m_width;
		int m_height;
		std::vector<Asteroids::Entities::Ship*> m_playerModels;
		int m_state;
		int m_modelsIndex;
	};
}

#endif