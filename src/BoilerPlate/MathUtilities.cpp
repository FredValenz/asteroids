#include "MathUtilities.h"
#include <algorithm>
#include <array>
#include <stdlib.h>
#include <math.h>


MathUtilities::MathUtilities()
{
}


MathUtilities::~MathUtilities()
{
}

int MathUtilities::floatToInt(float param)
{
	int x = (int)param;
	return x;
}

double MathUtilities::degreeToRad(double param)
{
	double x = (param * 3.14159) / 180;
	return x;
}

double MathUtilities::radToDeg(double param)
{
	double x = (param * 180) / 3.14159;
	return x;
}


float MathUtilities::intToFloat(int param)
{
	float x = (float)param;
	return x;
}

template<class T>
T MathUtilities::getMax(T a[])
{
	T result = max_element(a.begin(), a.end());

	return result();
}

template<class T>
T MathUtilities::getMin(T a[])
{
	T result = min_element(a.begin(), a.end());

	return result();
}

template<class T>
T MathUtilities::clamp(T n, T low,T up)
{
	return std::max(low, std::min(n, up));
}

bool MathUtilities::isPowerOf2(int param)
{
	bool ans;
	ans = param && !(param &(param - 1));
	return ans;
}


