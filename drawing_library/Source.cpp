#include "helpers/math/math.hpp"
#include "drawing/drawing.hpp"

#include <Windows.h>
#include <iostream>

int main()
{
	drawing::drawing().draw_circle(Vector2{ 2,2 }, 3);
}