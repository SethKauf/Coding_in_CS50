#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // one row of 4 question blocks horizontally
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n\n");

    // one col of 3 "blocks" vertically
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
    printf("\n");

    // a 3x3 grid of bricks
    // use n to ensure it's a square
    // const ensures that we can't change n in the future
    const int n = get_int("Size: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    // Doing the grid method again but with "firewalls" for human error
    int num;
    do
    {
        num = get_int("Size: ");
    }
    while (n < 1);
    {
        num = get_int("Size: ");
    }
        for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// int main(void)
// {
//     printf("????\n");
// }
