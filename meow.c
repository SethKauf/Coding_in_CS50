#include <stdio.h>

// inefficient way of doing this
// int main(void)
// {
//     printf("inefficient meows incoming:\n");
//     printf("meow\n");
//     printf("meow\n");
//     printf("meow\n");
// }

// // need to introduce variables and loops!
// // you only need to decalre a variable type at its instantiation in C
// int main(void)
// {
//     int counter = 3;
//     while (counter > 0)
//     {
//         printf("meow\n");
//         counter = counter - 1;
//     }
// }


// -- denotes -1, similarly ++ denotes +1
// int main(void)
// {
//     int i = 3;
//     while (i > 0)
//     {
//         printf("meow\n");
//         i--;
//     }
// }

// for loop
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}

#include <stdbool.h>
// int main(void)
// {
//     while(true)
//     {
//         printf("meow\n");
//     }
// }