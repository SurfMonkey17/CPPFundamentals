#include "raylib.h"
int main()
{

    int width = 350;
    InitWindow(width, 200, "Sherry's Window");

    while (WindowShouldClose() == false) // keeps window open infinitely
    {
        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(175, 100, 25, BLUE);
        EndDrawing();
    }
}