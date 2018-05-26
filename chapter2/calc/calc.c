#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

float add(float x, float y);
float substract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
float modulo(float x, float y);

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <number> <operation> <number>\n");
        return 1;
    }

    float x = atof(argv[1]);
    float y = atof(argv[3]);

    switch(argv[2][0])
    {
        case '-':
            printf("%f\n", substract(x, y));
            break;
        case '/':
            printf("%f\n", divide(x, y));
            break;
        case 'x':
            printf("%f\n", multiply(x, y));
            break;
        case '%':
            printf("%f\n", modulo(x, y));
            break;
        case '+':
            printf("%f\n", add(x, y));
            break;
        default:
            printf("Invalid Operator\n");
            return 1;
            break;
    }

    return 0;
}

float add(float x, float y)
{
    return x + y;
}

float substract(float x, float y)
{
    return x - y;
}

float multiply(float x, float y)
{
    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}

float modulo(float x, float y)
{
    // divide the float number first
    float d = x / y;

    // finding the remainder
    float z = x - ( y * (int) d);
    return z;
}