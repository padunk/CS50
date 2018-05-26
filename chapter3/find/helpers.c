/**
 * helpers.c
 *
 * CS50 AP
 * Find
 *
 * Helper functions.
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 * value = value to search, values = array of value, n = array length;
 */
bool search(int value, int values[], int n)
{
    int max = n - 1;
    int min = 0;

    while (max >= min)
    {
        int middle = (min + max) / 2;

        if (value < values[middle])
        {
            max = middle - 1;
        }
        else if (value > values[middle])
        {
            min = middle + 1;
        }
        else if (value == values[middle])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}


/**
 * Sorts array of n values.
 */
const int MAXIMUM = 65536;

void sort(int values[], int n)
{
    // TODO: implement an O(n) sorting algorithm
    int count[MAXIMUM];

    for (int i = 0; i < n; i++)
    {
        count[values[i]]++;
    }

    int j = 0;
    for (int x = 0; x < MAXIMUM; x++)
    {
        while (j < n && count[x] != 0)
        {
            values[j] = x;
            j++; count[x]--;
        }
    }
    return;
}
