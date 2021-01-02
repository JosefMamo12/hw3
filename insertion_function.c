
#include "insertion_function.h"
#include <stdlib.h>
#include <stdio.h>


void shift_element(int *arr, int i)
{
    int numberToSave, j = 0;
    numberToSave = *(arr + i);
    while (j < i)
    {
        *(arr + i - j) = *(arr + i - j - 1);
        j++;
    }
    *(arr) = numberToSave;
}
void insertion_sort(int *arr, int len)
{
    size_t counter = 0;
    int *p;
    int *q;
    for (size_t i = 0; i < len - 1; i++)
    {
        p = arr + i;
        q = p + 1;
        while (p + 1 > arr && *(q) < *(p))
        {
            counter++;
            p--;
        }
        shift_element(p + 1, counter);
        counter = 0;
    }
}
