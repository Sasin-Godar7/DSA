#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int left, int right, int key)
{
    if (left > right)
    {
        return -1; // Key not found
    }
    int mid = (left + right) / 2; // Calculate mid index

    if (arr[mid] == key)
    {
        return mid; // Key found at index mid
    }
    else if (arr[mid] > key)
    {
        return binary_search(arr, left, mid - 1, key); // Search in left half
    }
    else
    {
        return binary_search(arr, mid + 1, right, key); // Search in right half
    }
}
// Main function to test binary search

// This function takes an array, the left and right indices, and the key to search for
// It returns the index of the key if found, otherwise -1
// The function uses recursion to divide the array into halves and search for the key

int main()
{
    int n, key, result, arr[n];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search :");
    scanf("%d", &key);

    result = binary_search(arr, 0, n - 1, key); // Call binary search function

    if (result == -1)
    {
        printf("Key not found in the array.\n"); // Key not found
    }
    else
    {
        printf("Key found at index %d.\n", result); // Key found at index result
    }
    return 0; // Return success
}