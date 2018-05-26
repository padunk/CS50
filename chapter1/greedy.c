#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    float user_coins;
    do
    {
        user_coins = get_float("How much change is owed?\n");
    } while (user_coins < 0);

    int count = 0;
    int coins = round(user_coins * 100);
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;

    do
    {
        if(coins >= quarters)
        {
            coins -= quarters;
            count++;
        }
        else if(coins >= dimes && coins < quarters)
        {
            coins -= dimes;
            count++;
        }
        else if(coins >= nickels && coins < dimes)
        {
            coins -= nickels;
            count++;
        }
        else
        {
            count += coins;
            break;
        }
    } while (coins != 0);

    printf("%i\n", count);

}