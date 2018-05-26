#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char * name = get_string();
    int name_length = strlen(name);

    if (name != NULL)
    {
        for (int i = 0; i < name_length; i++)
        {
            if (i == 0 && name[0] != ' ')
                printf("%c", toupper(name[0]) );
            if (name[i] == ' ' && isalpha(name[i + 1]) )
                printf("%c", toupper(name[i + 1]) );
        }
    }
    printf("\n");
    return 0;
}