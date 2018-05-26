#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    // for (char c ='A'; c <= 'Z'; c++)
    // {
    //     printf("%c is %i\n", c, (int)c );
    // }

    string up_letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int len = strlen(up_letter);

    for (int i = 0; i < len; i++)
    {
        printf("%c is %i\n", up_letter[i], i);
    }

    return 0;
}