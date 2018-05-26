#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int convert (char s);

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./viginere <keyword>\n");
        return 1;
    }

    int keyword_length = strlen(argv[1]);

    for (int x = 0; x < keyword_length; x++)
    {
        if ( !isalpha(argv[1][x]) )
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    int k = 0;

    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        int key = convert(argv[1][k % keyword_length]);
        int check = (int) plain[i] + key;

        if (check > 90 && isupper(plain[i]))
        {
            printf("%c", (char) (check - 26) );
            k++;
        }
        else if (check > 122 && islower(plain[i]))
        {
            printf("%c", (char) (check - 26) );
            k++;
        }
        else if (isalpha(plain[i]))
        {
            printf("%c", (char) check );
            k++;
        }
        else
        {
            printf("%c", (char) plain[i] );
        }
    }

    printf("\n");
    return 0;
}

int convert (char s)
{
    int i = 0;
    if (isupper(s) && isalpha(s))
    {
        for (char c ='A'; c <= 'Z'; c++)
        {
            if (s == c) return i;
            i++;
        }
    }
    else if (islower(s) && isalpha(s))
    {
        for (char c ='a'; c <= 'z'; c++)
        {
            if (s == c) return i;
            i++;
        }
    }
    return 1;
}