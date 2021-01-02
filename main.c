#include <stdio.h>
#include "insertion_function.h"

int main(int argc, char const *argv[])
{

    int arr [SIZE];
    int length = sizeof(arr) / sizeof(int);
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", (arr + i));
    }

    insertion_sort(arr, length);
    for (size_t i = 0; i < length; i++)
    {
        if (i != length - 1)
        {
            printf("%d,", arr[i]);
        }
        else
            printf("%d \n", arr[i]);
    }

    return 0;
}