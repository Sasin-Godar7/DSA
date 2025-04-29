#include<stdio.h>
#include<stdlib.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) 
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}
int main()
{
    int n ,key;
    printf("enter the nnumber of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&key);
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
