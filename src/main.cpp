#include <iostream>
#include <raylib.h>


int main()
{

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "window name");


	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		Color c;
		c.r = 255;
		c.g = 0;
		c.b = 200;
		c.a = 255;

		DrawText("Congrats! You created your first window!", 190, 200, 20, c);



		EndDrawing();
	}


	CloseWindow();

	return 0;
}