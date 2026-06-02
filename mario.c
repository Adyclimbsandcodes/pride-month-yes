#include <cs50.h>
#include <stdio.h>

void decrement(int k, int steps);
void increment(int k);
int main(void)
{
    int height;
    while (true)
    {
        // prompt user to give height value
        height = get_int("height: ");

        // check for valid input
        if (height <= 0)
        {
            printf("invalid answer. please give a value greater than 0:\n");
            // prompt user to give height value
            continue;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < height; i++)
    {
        // decrement pyramid
        decrement(i, height);

        // increment pyramid
        increment(i);

        printf("\n");
    }
}

void decrement(int k, int steps)
{
    for (int j = 0; j < steps - (k + 1); j++)
    {
        printf(" ");
    }
}

void increment(int k)
{
    for (int j = 0; j < k + 1; j++)
    {
        printf("#");
    }
}
