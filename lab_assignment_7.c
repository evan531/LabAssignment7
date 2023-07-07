#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int swaps[arrSize];

    // Initializes swaps array to zero
    for (int i = 0; i < arrSize; i++)
    {
        swaps[i] = 0;
    }

    // Loops through list and sorts

    for (int n = 0; n < arrSize - 1; n++)
    {
        for (int i = 0; i < arrSize - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swaps[n]++;
            }
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%2d ", swaps[i]);
    }

    return 0;
}