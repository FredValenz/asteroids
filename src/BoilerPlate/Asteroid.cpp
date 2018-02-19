#include "Asteroid.hpp"
#include "IncludeGL.hpp"

namespace Asteroids
{
	namespace Entities
	{
		Asteroid::Asteroid(int width, int height)
		{
			m_position = new Engine::Math::Vector2(Engine::Math::Vector2::Origin);
			m_width = width;
			m_height = height;
		}

		Asteroid::~Asteroid(){}

		void Asteroid::Render()
		{
			glLoadIdentity();

			// Translates a vector
			glTranslatef(m_position->x, m_position->y, 0.0f);


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
			m_angle += 120.0f + deltaTime;
			Entity::Update(deltaTime);
		}

		Asteroid::AsteroidSize::SIZE Asteroid::getSize()
		{
			return m_size;
		}
	}
}
