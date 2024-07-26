#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // If we'd like to use longer digits than the 32-bits provided by int, we need to use "long"
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    long x = get_long("x: ");
    long y = get_long("y: ");

    // %i declares it will be an integer
    // printf("%i\n", x + y);

    // %li declares it will be a long-integer
    printf("%li\n", x + y);

    // If we want to do division we need to use integers
    // However this will "truncate" the answer
    // We need to type-cast the values
    float z = (float) x / (float) y;
    printf("%.20f\n", z);

    // Get a more precise fraction
    double za = (double) x / (double) y;
    printf("%.20f\n", za);
}