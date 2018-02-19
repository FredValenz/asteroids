#include "Entity.hpp"

namespace Asteroids {
	namespace Entities
	{
		Entity::Entity() {}

		Entity::Entity(int width, int height)
		{
			m_position = Engine::Math::Vector2(Engine::Math::Vector2::Origin);
			m_mass = 0.5f;
			m_angleInRads = Engine::Math::MathUtilities::degreeToRad(m_angle + Constants::ANGLE_OFFSET);
			m_maxWidth = width / 2.0f;
			m_minWidth = -width / 2.0f;
			m_maxHeight = height / 2.0f;
			m_minHeight = -height / 2.0f;

		}

		Entity::~Entity()
		{
		}

		float Entity::warp(float x, float min, float max)
		{
			if (x < min) return max - (min - x);
			if (x > max) return min + (x - max);
			return x;
		}

		Engine::Math::Vector2 Entity::Impulse()
		{
			float impulse = (Constants::THRUST / m_mass);
			float x = impulse * std::cosf(m_angleInRads);
			float y = impulse * std::sinf(m_angleInRads);

			return Engine::Math::Vector2(x, y);
		}

		void Entity::Update(float deltaTime)
		{
			m_position.x += m_velocity.x * static_cast <float>(deltaTime);
			m_position.y += m_velocity.y * static_cast <float>(deltaTime);

			m_position.x = warp(m_position.x, m_minWidth, m_maxWidth );
			m_position.y = warp(m_position.y, m_minHeight, m_maxHeight);
		}

		void Entity::Render(){}

	}
}


