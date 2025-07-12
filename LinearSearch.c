#include <stdio.h>
#include <stdlib.h>

// int linearSearch(int arr[], int n, int key);  // 👈 optional but good habit

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int result, n, key;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the key value to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1)
    {
        printf("\nElement found at index %d\n", result);
    }
    else
    {
        printf("\nSorry, the element you searched was not found :(\n");
    }

    return 0;
}
