#include "Player.hpp"
#include "IncludeGL.hpp"

namespace Asteroids
{
	namespace Entities {

		Player::Player(int width, int height)
			: m_angle(0.0)
			, m_thruster(false)
			, m_moving(false)
			, m_velocity(Engine::Math::Vector2())
		{
			m_radius = 0.0f;
			m_position = Engine::Math::Vector2(Engine::Math::Vector2::Origin);
			m_angleInRads = Engine::Math::MathUtilities::degreeToRad(m_angle+ Constants::ANGLE_OFFSET);

			m_width = width + 50.0f;
			m_height = height + 50.0f;
			m_mass = 0.5f;
		}

		
		void Player::Update(float deltaTime)
		{
			if (!m_moving) m_thruster = false;

			m_velocity = Engine::Math::Vector2(m_velocity.x * Constants::DRAG, m_velocity.y * Constants::DRAG);

			Engine::Math::Vector2 pos = m_position + m_velocity;

			m_position = pos;

			Entity::Update(deltaTime);
		}

		/*
		void Player::Move(const Engine::Math::Vector2& unit)
		{
			float x = m_position->x + unit.x;
			float y = m_position->y + unit.y;

			m_position->x = warp(x, m_minWidth, m_maxWidth);
			m_position->y = warp(y, m_minHeight, m_maxHeight);
		}
		*/
		void Player::MoveForward()
		{
			m_thruster = true;
			m_moving = true;

			ApplyImpulse();
		}

		void Player::Render()
		{
			glLoadIdentity();


			

			// Translates a vector
			glTranslatef(m_position.x, m_position.y, 0.0f);

			// Rotates matrix
			glRotatef(m_angle, 0.0f, 0.0f, 1.0f);


			// Draws the player ship
			glBegin(GL_LINE_LOOP);
			glVertex2f(4.0f, -12.0f);
			glVertex2f(8.0f, -16.0f);
			glVertex2f(24.0f, 16.0f);
			glVertex2f(8.0f, 8.0f);
			glVertex2f(0.0f, 28.0f);
			glVertex2f(-8.0f, 8.0f);
			glVertex2f(-24.0f, 16.0f);
			glVertex2f(-8.0f, -16.0f);
			glVertex2f(-4.0f, -12.0f);
			glEnd();

			if (m_thruster)
			{
				// Draws ship's thruster
				glBegin(GL_LINE_LOOP);
				glVertex2f(4.0f, -12.0f);
				glVertex2f(0.0f, -24.0f);
				glVertex2f(-4.0f, -12.0f);
				glEnd();
			}
		}


		void Player::RotateRight()
		{
			m_angle += -5.0f;
			m_angleInRads = Engine::Math::MathUtilities::degreeToRad(m_angle);
		}

		void Player::RotateLeft()
		{
			m_angle += 5.0f;
			m_angleInRads = Engine::Math::MathUtilities::degreeToRad(m_angle);
		}
	}

}