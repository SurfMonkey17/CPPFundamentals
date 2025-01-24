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

    // axe coordinates
    int axe_x{400};
    int axe_y{0};

    int direction{10};

    while (WindowShouldClose() == false) // keeps window open infinitely
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic begins

        SetTargetFPS(60);

        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move axe

        axe_y += direction;

        if (axe_y > 400 || axe_y < 0)
        {
            direction = -direction;
        }

        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        // game logic ends
        EndDrawing();
    }
}