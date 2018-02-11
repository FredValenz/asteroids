#include "Color.h"



Color::Color()
{
	m_color.x = 0;
	m_color.y = 0;
	m_color.z = 0;
	m_color.w = 255;
}


Color::Color(float r, float g, float b, float a)
{
	m_color.x = r;
	m_color.y = g;
	m_color.z = b;
	m_color.w = a;

}


