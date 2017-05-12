#pragma once


struct SVector2 {
public:
	float x;
	float y;

	SVector2(float x = 0, float y = 0) : x(x), y(y)
	{
	}

	SVector2 operator+(const SVector2& other)
	{
		SVector2 v = *this;
		v.x += other.x;
		v.y += other.y;
		return v;
	}
};