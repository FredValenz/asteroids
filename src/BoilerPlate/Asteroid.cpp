#include "Asteroid.hpp"
#include "IncludeGL.hpp"

namespace Asteroids
{
	namespace Entities
	{
		Asteroid::Asteroid(int width, int height)
		{
			m_position = Engine::Math::Vector2(Engine::Math::Vector2::Origin);
			m_width = width;
			m_height = height;
			m_size = AsteroidSize::SMALL;
			sizeFactor();
		}

		Asteroid::~Asteroid(){}

		void Asteroid::Render()
		{
			glLoadIdentity();

			// Translates a vector
			glTranslatef(m_position.x, m_position.y, 0.0f);

			// Draws an asteroid
			glBegin(GL_LINE_LOOP);
			glVertex2f(0.0f, 32.0f);
			glVertex2f(8.0f, 32.0f);
			glVertex2f(12.0f, 36.0f);
			glVertex2f(16.0f, 36.0f);
			glVertex2f(16.0f, 40.0f);
			glVertex2f(20.0f, 44.0f);
			glVertex2f(20.0f, 48.0f);
			glVertex2f(24.0f, 52.0f);
			glVertex2f(12.0f, 64.0f);
			glVertex2f(8.0f, 64.0f);
			glVertex2f(4.0f, 68.0f);
			glVertex2f(-4.0f, 68.0f);
			glVertex2f(-8.0f, 64.0f);
			glVertex2f(-12.0f, 64.0f);
			glVertex2f(-12.0f, 60.0f);
			glVertex2f(-16.0f, 56.0f);
			glVertex2f(-16.0f, 52.0f);
			glVertex2f(-20.0f, 48.0f);
			glVertex2f(-20.0f, 44.0f);
			glVertex2f(-16.0f, 40.0f);
			glVertex2f(-16.0f, 36.0f);
			glVertex2f(-12.0f, 32.0f);
			glVertex2f(-8.0f, 36.0f);
			glEnd();
		}

		void Asteroid::Update(float deltaTime)
		{
			ApplyImpulse();

			m_velocity = Engine::Math::Vector2(m_velocity.x * Constants::DRAG, m_velocity.y * Constants::DRAG);

			Engine::Math::Vector2 pos = m_position + m_velocity;

			m_position = pos;
			Entity::Update(deltaTime);
		}

		Asteroid::AsteroidSize::SIZE Asteroid::getSize()
		{
			return m_size;
		}

		void Asteroid::sizeFactor()
		{
			if (m_size == AsteroidSize::BIG) { m_radius = 40.f; m_mass = 3.f; };

			if (m_size == AsteroidSize::MEDIUM) { m_radius = 20.f; m_mass = 2.5f; };

			if (m_size == AsteroidSize::SMALL) { m_radius = 10.f; m_mass = 2.f; };
		};
	}
}
