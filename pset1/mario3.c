#include <stdio.h>
// #include <cs50.h>

// We wanmt to get something that can take an input "n" and return blocks
// Similar to what we see in Mario
// in this format:
//   # #
//  ## ##
// ### ###
// etc., 1 through 8

// Tell Main that there will be a function to print the grid
int get_size(void);
void print_grid(int size);
void print_grid2(int size);
void print_grid3(int size);
void print_grid4(int size);
void print_grid5(int size);
void print_grid_working(int size);

// Instantiate Main
int main(void)
{
    // Get size of grid
    int n = get_size();

    //Print grid of bricks
    print_grid_working(n);
}

int get_size(void)
{
    int n;

    return n = 5;
}

// "Alpha" Print Grid from class
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

void print_grid2(int size)
{
    for (int i = 1; i < size; i++)
    {
        {
            for (int j = 0; j < i; j++)
            {
                printf("#");
                printf(" ");
            }
            printf(" ");
            for (int k = 0; k < i; k++)
            {
                printf(" ");
                printf("#");
            }
        }
        printf("\n");
    }     
}

void print_grid3(int size)
{
    for (int i = 1; i < size; i++)
    {
        {
            for (int j = 0; j < i; j++)
            {
                // for (int k = 0; k < i; k++)
                // {
                //     printf("#");
                // }
                // printf(" ");
                printf("#");
            }
            for (int k = 0; k < i; k++)
            {
                printf(" ");
            }
            for (int x = 0; x < i; x++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}

void print_grid4(int size)
{
    int i = 0;
    while (i < size)
    {
        printf("#");
        i++;
    }
    printf("\n");
}

void print_grid5(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int x = size; x > i; x--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf(" ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

// This version worked!
void print_grid_working(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int x = size; x > i; x--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf(" ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}