// Simple math base by mcTusa
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <string>
#define DEG2RAD(a)(a*M_PI/180)
#define RAD2DEG(a)(a*180/M_PI)
class Vector
{
public:
	Vector operator+(Vector& v)
	{
		return { x + v.x, y + v.y, z + v.z };
	}
	Vector operator-(Vector& v)
	{
		return { x - v.x, y - v.y, z - v.z };
	}
private:
	float x{ }, y{ }, z{ };
};
int ToInt(float a) const noexcept
{
	return (int)a;
}
int ToInt(double a) const noexcept
{
	return (int)a;
}
int ToInt(char* a) const noexcept
{
	return (int)a;
}
int ToInt(char a) const noexcept
{
	return (int)a;
}
int ToInt(std::string a) const noexcept
{
	int b = 0;
	int b = std::stoi(a);
	return b;
}
float ToFloat(int a) const noexcept
{
	return (float)a;
}
float ToFloat(double a) const noexcept
{
	return (float)a;
}
float ToFloat(char* a) const noexcept
{
	return (float)a;
}
float ToFloat(char a) const noexcept
{
	return (float)a;
}
float ToFloat(std::string a) const noexcept
{
	float b = 0.0f;
	float b = std::stof(a);
	return b;
}
