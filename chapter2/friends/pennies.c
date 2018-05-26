/**
 * pennies.c
 *
 * CS50 AP
 * Old Friends
 *
 * Calculates how many pennies a user would get if their change
 * doubles each day using command line information
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    // check the argument, don't declare any variable
    if (argc != 3)
    {
        printf("Usage: ./pennies <days> <starting amount>\n");
        return 1;
    }

    // if all arguments is passed, do your stuff
    int days = atoi(argv[1]);
    int pennies = atoi(argv[2]);

    // check if days or pennies is correct
    if (days < 28 || days > 31)
    {
        printf("%i is not in the range [28, 31]\n", days);
        return 1;
    }
    if (pennies < 0)
    {
        printf("%i is not a positive number\n", pennies);
        return 1;
    }

    // do the math./s
	long double result = (pow(2, days) * pennies) - pennies;

	printf("$%.2Lf\n", result / 100);

    return 0;
}
