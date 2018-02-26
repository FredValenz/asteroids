#pragma once

namespace Const
{
	const float PI = 3.14159265f;
}

namespace Engine {

	namespace Math {

		class MathUtilities
		{
		public:
			MathUtilities();
			~MathUtilities();
			int floatToInt(float);
			float intToFloat(int);
			static float radToDeg   (float);
			static float degreeToRad(float);
			template<class T> T getMax(T a[]);
			template<class T> T getMin(T a[]);
			template<class T> T clamp(T, T, T);
			bool isPowerOf2(int);


		};
	}
}
