//Helper functions for the sort race

#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

//Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise
bool check_flag(char *str)
{
    string symbols[] = {"-a", "-b", "-r", "-s"};

    for (int i = 0; i < 4; i++)
    {
        if (str == symbols[i])
        {
            return true;
        }
    }
    return false;
}

//Sorts array of n values using bubble sort.
void bubble(int values[], int n)
{
    int counter = 0;

    do
    {
        counter = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (values[i + 1] < values[i])
            {
                int swap = values[i];
                values[i] = values[i - 1];
                values[i - 1] = swap;
                counter ++;
            }
        }
    } while (counter > 0);

    return;
}

//Sorts array of n values using selection sort.
void selection(int values[], int n)
{

    for (int j = 0; j < n; j++)
    {
        // check if already sorted TODO
        int counter = 0;
        for (int x = 0; x < n - 1; x++)
        {
            if (values[x + 1] < values[x])
            counter++;
        }

        if (counter > 0)
        {
            // find the smallest element
            int smallest = values[j + 1];
            int index = j + 1;

            for (int i = j + 1; i < n; i++)
            {
                if (values[i + 1] < smallest) {
                    smallest = values[i + 1];
                    index = i + 1;
                }
            }

            // swap if unsorted values is bigger than smallest
            if (values[j] > smallest)
            {
                int swap = values[j];
                values[j] = smallest;
                values[index] = swap;
            }
        }
        else
        {
            break;
        }
    }

    return;
}

//Sorts array of n values using insertion sort.
void insertion(int values[], int n)
{
    int new_values[n];

    for (int i = 1; i < n; i++)
    {
        if (values[i] < values[i - 1])
        {
            int index;

            // find what index to insert n in sorted arrays
            for (int j = 0; j < i; j++)
            {
                if (values[i] < values[j])
                {
                    index = j;
                }
            }

            // shift to the right
            // copy element after values[i]
            for (int x = i + 1; x < n; x++)
            {
                new_values[x] = values[x];
            }
            // insert n into sorted portion
            new_values[index] = values[i];
            new_values[i] = values[i - 1];
            values = new_values;
        }
    }
    return;
}