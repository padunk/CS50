#include <stdio.h>
#include <cs50.h>

int checkDigits(long long x);
int checkType(long long x);
int checkValid(long long x);

int main(void)
{
    long long user_cc;

    do
    {
        user_cc = get_long_long("Number: ");
    } while (user_cc < 0);

    int type = checkType(user_cc);
    int digits = checkDigits(user_cc);
    int valid = checkValid(user_cc);

    if(digits < 13 || digits == 14 || digits > 16 || valid > 0)
    {
        printf("INVALID\n");
    }
    else if (digits == 15)
    {
        type == 34 || type == 37 ? printf("AMEX\n") : printf("INVALID\n");
    }
    else if (digits == 16)
    {
        type > 50 && type < 56 ? printf("MASTERCARD\n") : type == 4 ? printf("VISA\n") : printf("INVALID\n");
    }
    else
    {
        printf("VISA\n");
    }

    return 0;
}

int checkDigits(long long x)
{
    int count = 1;
    while(x > 10)
    {
        x /= 10;
        count++;
    }
    return count;
}

int checkType(long long x)
{
    int type = 0;

    if(checkDigits(x) == 13)
    {
        type = x / 100000000000;
    }
    else if (checkDigits(x) == 15)
    {
        type = x / 10000000000000;
    }
    else if (checkDigits(x) == 16)
    {
        if (x / 1000000000000000 == 4)
        {
            type = 4;
        }
        else
        {
            type = x / 100000000000000;
        }
    }
    return type;
}

int checkValid(long long x)
{
    int single_number = 0;
    int sum_multiply_by_two = 0;
    int sum_other_number = 0;
    int max_i = checkDigits(x);
    int total = 0;

    for (int i = 0; i < max_i; i++)
    {
        if (i % 2 == 0)
        {
            single_number = x % 10;
            sum_other_number += single_number;
            x /= 10;
        } else
        {
            single_number = (x % 10) * 2;
            if (single_number > 9)
            {
                sum_multiply_by_two += (single_number / 10);
                sum_multiply_by_two += (single_number % 10);
            }
            else
            {
                sum_multiply_by_two += single_number;
            }
            x /= 10;
        }
    }

    total = (sum_multiply_by_two + sum_other_number) % 10;
    return total;
}