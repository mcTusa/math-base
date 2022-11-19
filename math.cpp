// Simple math base by mcTusa
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <string>
#define DEG2RAD(a)(a*M_PI/180)
#define RAD2DEG(a)(a*180/M_PI)
int ToInt(float a)
{
	try
	{
		return (int)a;
	}
	catch (...)
	{
		return 0;
	}
}
int ToInt(double a)
{
	try
	{
		return (int)a;
	}
	catch (...)
	{
		return 0;
	}
}
int ToInt(char* a)
{
	try
	{
		return (int)a;
	}
	catch (...)
	{
		return 0;
	}
}
int ToInt(char a)
{
	try
	{
		return (int)a;
	}
	catch (...)
	{
		return 0;
	}
}
int ToInt(std::string a)
{
	try
	{
		int b = std::stoi(a);
		return b;
	}
	catch (...)
	{
		return 0;
	}
}
float ToFloat(int a)
{
	try
	{
		return (float)a;
	}
	catch (...)
	{
		return 0;
	}
}
float ToFloat(double a)
{
	try
	{
		return (float)a;
	}
	catch (...)
	{
		return 0;
	}
}
float ToFloat(char* a)
{
	try
	{
		return (float)a;
	}
	catch (...)
	{
		return 0;
	}
}
float ToFloat(char a)
{
	try
	{
		return (float)a;
	}
	catch (...)
	{
		return 0;
	}
}
float ToFloat(std::string a)
{
	try
	{
		float b = std::stof(a);
		return b;
	}
	catch (...)
	{
		return 0;
	}
}
