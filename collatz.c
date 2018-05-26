#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
    printf("Input number: ");
    int x = get_int();
    printf("Step to 1 = %i\n", collatz(x));
    return 0;
}


int collatz(int n)
{

    if (n <= 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 += collatz(n / 2);
    }
    else if (n % 2 != 0)
    {
        return 1 += collatz(3 * n + 1);
    }
    else
    {
        return 2;
    }

    return 0;
}