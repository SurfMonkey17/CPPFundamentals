#include "raylib.h"
int main()
{
    // window dimensions
    int width{800};
    int height{450};
    InitWindow(width, height, "Axe Game");

    // circle coordinates

    int circle_x{200};
    int circle_y{200};

    while (WindowShouldClose() == false) // keeps window open infinitely
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic begins

        SetTargetFPS(60);

        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(300, 0, 50, 50, RED);

        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x = circle_x - 10;
        }

        // game logic ends
        EndDrawing();
    }
}