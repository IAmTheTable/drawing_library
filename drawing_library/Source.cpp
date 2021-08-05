#include "helpers/math/math.hpp"

#include <Windows.h>
#include <iostream>

int main()
{
	auto result = Vector2(5, 5);
	auto yes = result + Vector2(5, 5);
	std::cout << result.x << ", " << result.y << std::endl;
	std::cout << yes.x << ", " << yes.y << std::endl;
}