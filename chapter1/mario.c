#include <cs50.h>
#include <stdio.h>
#include <string.h>

void printSpace(int x);
void printHash(int x);

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    } while (height > 23 || height < 0);

    for (int i = 1; i < height + 1; i++)
    {
        printSpace(height - i);
        printHash(i);
        printSpace(2);
        printHash(i);
        printf("\n");
    }

}

void printSpace(int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf(" ");
    }
}

void printHash(int x)
{
    int i;
    for ( i = 0; i < x; i++)
    {
        printf("#");
    }
}