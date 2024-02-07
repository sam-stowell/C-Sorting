#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Function to shuffle the array elements
void shuffle(int *arr, int n)
{
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        int j = rand() % (i + 1);

        // swap arr[i] with the element at a random index
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Function to check if the array is sorted in ascending order or not
bool isSorted(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;

    return true;
}

// Bogosort algorithm
void bogosort(int *arr, int n)
{
    // if array is not sorted, shuffle the array again
    int count = 0;
    while (!isSorted(arr, n))
        shuffle(arr, n);
        printf("%d",count);
        count = count + 1;
}

// Driver code
int main()
{
    int arr[] = {3, 2, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bogosort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
