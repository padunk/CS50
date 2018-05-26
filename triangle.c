#include <stdio.h>
#include <math.h>
#include <cs50.h>

bool valid_triangle(int x, int y, int z);

int main(void)
{
    printf("Input length of triangle: ");
    int x = get_int();
    printf("Input other length: ");
    int y = get_int();
    printf("Another length please: ");
    int z = get_int();
    valid_triangle(x, y, z);
}

bool valid_triangle(int x, int y, int z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    if ( (x + y <= z) || (x + z <= y) || (y + z <= x) )
    {
        return false;
    }

    return true;
}