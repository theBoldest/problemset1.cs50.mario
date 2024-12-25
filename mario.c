#include <stdio.h>
#include <cs50.h>

void print_row (int spaces, int bricks);

int main(void)
{
int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        print_row(n - i , i + 1);
    }
}


void print_row (int spaces, int bricks)
{
    // print spaces
    {
    for (int i = 1; i < spaces; i++)
        printf(" ");
    }
    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
