#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaOfTriangle(float x, float y, float z, float w);

int main ()
{
    float a, b, c, S, AOT;
    printf("Enter values of a,b,c?");
    scanf("%f%f%f", &a,&b,&c);

    S = (a+b+c)/2;

    AOT = areaOfTriangle(S,a,b,c);
    printf("\nArea Of Triangle = %f\n", AOT);
}

float areaOfTriangle(float x, float y, float z, float w)
{
    return sqrt(x*(x-y)*(x-z)*(x-w));
}