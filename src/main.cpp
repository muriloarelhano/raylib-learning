#include "raylib.h"

int main() {
	InitWindow(800, 600, "raylib [core] example - basic window");

	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}


	CloseWindow();

	return 0;
}