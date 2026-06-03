#include <cs50.h>
#include <stdio.h>

void left(int k, int steps);
void right(int k);
int main(void)
{
    int height;
    // check for valid submission, must be a number greater than 0 and less than 9
    while (true)
    {
        height = get_int("pick a number between 1 and 8 inclusive: ");
        if (height <= 0 || height > 8)
        {
            printf("invalid input. ");
            continue;
        }
        else
        {
            break;
        }
    }
    // set conditions to print based on height given using for loops
    for (int i = 0; i < height; i++)
    {
        // left stairs
        left(i, height);
        // right stairs
        right(i);
        // new line for a cleaner look after all stairs printed
        printf("\n");
    }
}

// left stairs
void left(int k, int steps)
{
    for (int j = 0; j < steps - (k + 1); j++)
    {
        printf(" ");
    }
    for (int j = 0; j < k + 1; j++)
    {
        printf("#");
    }
    // space between stairs sets
    printf("  ");
}

// right stairs
void right(int k)
{
    for (int j = 0; j < k + 1; j++)
    {
        printf("#");
    }
}
