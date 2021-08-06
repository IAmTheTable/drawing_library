#pragma once
#include <utility>

struct Vector2
{
	// members
	int x;
	int y;

	void swap(Vector2& vec)
	{
		*this = vec;
	}

	Vector2 operator =(Vector2& vec)
	{
		if (&vec.x != 0 && &vec.y != 0)
		{
			this->swap(vec);
			return *this;
		}
	}

	bool operator ==(Vector2& vec)
	{
		return *this == vec;
	}

	Vector2& operator &(Vector2& vec)
	{
		return *this;
	}

	Vector2* operator ->()
	{
		return this;
	}

	Vector2 operator +(const Vector2& vec)
	{
		return Vector2(x + vec.x, y + vec.y);
	}

	void operator +=(const Vector2& vec)
	{
		x += vec.x;
		y += vec.y;
	}

	Vector2 operator -(const Vector2 vec)
	{
		if (&vec.x != 0 && &vec.y != 0)
			return *this - vec;
		return *this;
	}

	Vector2 operator /(const Vector2 vec)
	{
		if (&vec.x != 0 && vec.y != 0)
			return *this / vec;
		return *this;
	}

	Vector2(int x, int y) : x(x), y(y) {};
	Vector2(long x, long y) : x(static_cast<int>(x)), y(static_cast<int>(y)) {};
};