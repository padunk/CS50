#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float celsius = get_float("C: ");
    float frht = (celsius * 9 / 5) + 32;
    printf("F: %.1f\n", frht);
}