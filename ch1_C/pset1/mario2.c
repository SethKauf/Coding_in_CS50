#include <cs50.h>
#include <stdio.h>

// This is a much cleaner version of Mario, which was copied straight off the CS50 course

// Because we don't instantiate the functions until later,
// We can "declare" them now, so the main function of int main(void)
// Knows they will exist at some point in the script

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);
}


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}