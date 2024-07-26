#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     char c = get_char("Do you agree? ");
//     // When dealing with strings, use double-quotes.
//     // When dealing with deliberately-single characters, use single-quotes.
//     if (c == 'y')
//     {
//         printf("Agreed.\n");
//     }
//     // This is pretty inefficient having to re-do it like this
//     else if (c == 'Y')
//     {
//         printf("Agreed.\n");
//     }
//     else if (c == 'n')
//     {
//         printf("Not agreed.\n");
//     }
//     else if (c == 'N')
//     {
//         printf("Not agreed.\n");
//     }
// }

int main(void)
{
    char c = get_char("Do you agree? ");
    // When dealing with strings, use double-quotes.
    // When dealing with deliberately-single characters, use single-quotes.
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}