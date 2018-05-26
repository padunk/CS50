#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
	int user_days;
	int first_penny;

	do
	{
	    user_days = get_int("Days in month: ");
	} while (user_days < 28 || user_days > 31);

    do
	{
	    first_penny = get_int("Pennies on first day: ");
	} while (first_penny <= 0);

	long double result = (pow(2, user_days) * first_penny) - first_penny;

	printf("$%.2Lf\n", result / 100);

}