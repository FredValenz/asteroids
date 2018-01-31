#pragma once
class MathUtilities
{
public:
	MathUtilities();
	~MathUtilities();
	int floatToInt(float);
	float intToFloat(int);
	double radToDeg(double);
	double degreeToRad(double);
	template<class T> T getMax(T a[]);
	template<class T> T getMin(T a[]);
	template<class T> T clamp(T,T,T);
	bool isPowerOf2(int);


};


