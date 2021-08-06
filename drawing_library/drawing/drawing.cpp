#include "drawing.hpp"

bool drawing::drawing::draw_circle(Vector2 position, int radius)
{
	RECT size;

	auto desktop = GetDesktopWindow();

	GetUpdateRect(desktop, &size, false);

	auto screen_size = Vector2(size.left - size.right, size.top - size.bottom);
	auto desktop_dc = GetDC(desktop);

	Rectangle(desktop_dc, 0, 0, screen_size.x / 2, screen_size.y / 2);

	return false;
}
