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
// Print Grid function
void print_grid_working(int size)
{
    // First for-loop ensures that we're starting at 1 and incrimenting until we reach
    // the size "n"
    for (int i = 1; i <= size; i++)
    {
        // Second for-loop is for the indentation at the start of the pyramid
        // ie to ensure that we are going the correct "spaces out" from the start to the finish
        for (int j = size; j > i; j--)
        {
            printf(" ");
        }
        // This for loop prints the left-side of the pyramid
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        // Space between left and right sides of pyramid
        printf("  ");
        // For loop for the right-hand side of the pyramid
        for (int x = 0; x < i; x++)
        {
            printf("#");
        }
        // Ending block special-character to give us a new line
        printf("\n");
    }
}