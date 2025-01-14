#include "raylib.h"
int main()
{

    int width = 350;
    InitWindow(width, 200, "Sherry's Window");

    while (true) // keeps window open infinitely
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}