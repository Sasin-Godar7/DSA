#include <stdio.h>


int binarySearch(int arr[], int left, int right, int key);

int main()
{
    int n, key;
    printf("enter the size of an array :");
    scanf("%d", &n);
    int arr[n];

    printf("\n enter the elements in the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n enter the key elements to search :");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

   if (result!=-1)
   {
    printf("\n element found in the index %d",result);
   }
   else
   {
    printf("\n the element does not found sorry ;( ");
   }
}

int binarySearch(int arr[], int left, int right, int key)
{
    if (left > right)
    {
        return -1;
    }

    int mid = (left + right) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return binarySearch(arr, left, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, right, key);
    }
}