#include <stdio.h>
#include <cs50.h>

int main(void)
{
    unsigned long long isbn = get_long_long("ISBN :");
    int last_tenth_digit = isbn % 10;
    int first_nine = 0;
    int temp = 0;

    long isbn_temp = isbn / 10;

    for (int i = 9; i > 0; i--)
    {
        temp = isbn_temp % 10;
        first_nine += (i * temp);
        isbn_temp /= 10;
    }

    if ((first_nine % 11) == last_tenth_digit)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}