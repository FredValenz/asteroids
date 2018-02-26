#pragma once
#ifndef _BULLET_HPP_
#define _BULLET_HPP_

#include "Entity.hpp"
#include "Color.hpp"

namespace Asteroids
{
	namespace Entities
	{
		class Bullet : Entity
		{
		public:
			Bullet(Engine::Math::Vector2 pos, Engine::Math::Vector2 v, Color color, float angle, const int width, const int height);
			~Bullet();

			void Render();
			void Update( float );

			int m_lifeTime;
		};
	}
}
#endif // !_BULLET_HPP_

