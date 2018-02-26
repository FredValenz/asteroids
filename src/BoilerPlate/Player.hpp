#pragma once
#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Vector2.hpp"
#include "Entity.hpp"
#include "MathUtilities.hpp"

namespace Asteroids
{
	namespace Entities
	{
		class Player : Entity
		{
		public:
			/* ==========================
			* CTOR
			* ==========================*/
			Player(int, int);

			/* ==========================
			* PUBLIC FUNCTIONS
			* ==========================*/
			void Update(float);
			void Render(void);
			void Move(const Engine::Math::Vector2& unit);
			void MoveForward(void);
			void RotateRight();
			void RotateLeft();
			void notMoving() { m_moving = false; };
			void ApplyImpulse() override { m_velocity += Impulse(); };

		private:


			/* ==========================
			* MEMBERS
			* ==========================*/
			Engine::Math::Vector2 m_velocity;
			Engine::Math::Vector2 m_position;
			float m_angle;
			float m_angleInRads;
			bool m_thruster;
			bool m_moving;


		};
	}
	
}

#endif // !_PLAYER_HPP_
