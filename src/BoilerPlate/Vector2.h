#pragma once

#ifndef _VECTOR2_H_
#define _VECTOR2_H_
#endif

namespace Engine
{
	namespace Math
	{
		struct Vector2
		{
			static Vector2 Origin;

			Vector2();
			Vector2( float, float );
			Vector2(float); 

			float Length() const;
			float SquaredLength() const;
			float Normalize();

			Vector2& operator=( const Vector2& rhs );
			Vector2& operator+=( const Vector2& rhs );
			Vector2& operator-=( const Vector2& rhs );
			Vector2& operator*=( const Vector2& rhs );
			Vector2& operator/=( const Vector2& rhs );
			Vector2 operator+(const Vector2& rhs) const;
			Vector2 operator-(const Vector2& rhs) const;
			Vector2 operator*(const Vector2& rhs) const;
			Vector2 operator/(const Vector2& rhs) const;
			bool operator==(const Vector2& rhs) const;
			bool operator!=(const Vector2& rhs) const;
			friend Vector2 operator*(float, const Vector2&);
			friend Vector2 operator*(const Vector2&, float);

			float x;
			float y;
			float length;
		};
	}
}

