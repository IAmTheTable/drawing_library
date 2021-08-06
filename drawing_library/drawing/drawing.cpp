#include "drawing.hpp"

bool drawing::drawing::draw_circle(Vector2 position, int radius)
{
	RECT size;
	GetUpdateRect(GetDesktopWindow(), &size, false);
	auto screen_size = Vector2(size.left - size.right, size.top - size.bottom);

	return false;
}
