#include "Bullet.h"
#include "IncludeGL.hpp"


namespace Asteroids
{
	namespace Entities
	{
		Bullet::Bullet(Engine::Math::Vector2 pos, Engine::Math::Vector2 v, Color color, float angle, const int width, const int height)
		{
			m_mass = 0.3f;
			m_radius = 1.5f;
			m_angle = angle;
			m_angleInRads = Engine::Math::MathUtilities::degreeToRad(m_angle + Constants::ANGLE_OFFSET);
			m_position = pos;
			m_color = color;
			m_lifeTime = 0;
			m_width = width;
			m_height = height;
		}


		Bullet::~Bullet()
		{
		}

		void Bullet::Render()
		{
			m_lifeTime++;

			// Resetting the matrix
			glLoadIdentity();

			// Wrap around call
			warp();

			// Translation
			glTranslatef(m_position.x, m_position.y, 0.f);

			// Applying color
			//glColor3f(m_color.x, m_color.y, m_color.z);

			// Rendering Bullet
			glLoadIdentity();
		}

		void Bullet::Update(float deltaTime)
		{

		}
	}
}

