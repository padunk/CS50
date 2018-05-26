#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <positive number>\n");
        return 1;
    }

    // if key > 26 then find the remainder.
    int key = atoi(argv[1]) % 26;
    string up_letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string low_letter = "abcdefghijklmnopqrstuvwxyz";

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        char c = plain [i];
        if ( isalpha(c) )
        {
            // c = (p + k) % 26
            if (isupper(c) )
            {
                int x = ((int)plain[i] % 65 + key) % 26;
                printf("%c", up_letter[x]);
            }
            else if (islower(c) )
            {
                int x = ((int)plain[i] % 97 + key) % 26;
                printf("%c", low_letter[x]);
            }

        }
        else
        {
            // if not a letter print as is
            printf("%c", plain[i]);
        }
    }

    printf("\n");

    return 0;
}