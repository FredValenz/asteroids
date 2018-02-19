#pragma once
#ifndef _ASTEROID_HPP_
#define _ASTEROID_HPP_

#include "Entity.hpp"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

namespace Asteroids
{
	namespace Entities
	{
		class Asteroid : Entity
		{
		public:

			struct AsteroidSize
			{
				enum SIZE
				{
					SMALL = 1,
					MEDIUM = 5,
					BIG = 10,
				};
			};

			/* ==========================
			* CTOR
			* ==========================*/
			Asteroid(int, int);
			~Asteroid();

			/* ==========================
			* PUBLIC FUNCTIONS
			* ==========================*/
			void Render();
			void Update(float);
			AsteroidSize::SIZE getSize();


			/* ==========================
			* MEMBERS
			* ==========================*/
			Engine::Math::Vector2* m_position;
			float m_width;
			float m_height;
			Asteroid::AsteroidSize::SIZE m_size;
			float m_angle;
		};
	}
}
#endif // !_ASTEROID_HPP_
