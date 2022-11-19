#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#define DEG2RAD(a)(a*M_PI/180)
#define RAD2DEG(a)(a*180/M_PI)

class Float
{
public:
	float value;

	Float(float a) { value = a; };
	Float(int a) { value = a; };
	Float(double a) { value = a; };

	Float operator=(float a)
	{
		value = a;
		return *this;
	}
	Float operator+=(float a)
	{
		value += a;
		return *this;
	}
	Float operator-=(float a)
	{
		value -= a;
		return *this;
	}
	Float operator*=(float a)
	{
		value *= a;
		return *this;
	}
	Float operator/=(float a)
	{
		value /= a;
		return *this;
	}
	Float operator+(float a)
	{
		value + a;
		return *this;
	}
	Float operator-(float a)
	{
		value - a;
		return *this;
	}
	Float operator*(float a)
	{
		value * a;
		return *this;
	}
	Float operator/(float a)
	{
		value / a;
		return *this;
	}
	bool operator==(float a)
	{
		if (value == a)
			return true;
		else
			return false;
	}
	operator float() const
	{
		return value;
	}
	operator double() const
	{
		return (double)value;
	}
};
