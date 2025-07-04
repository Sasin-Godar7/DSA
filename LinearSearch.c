// to perform the linear searching

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int result, n, key;
    printf("enter the size of an array :");
    scanf("%d",&n);
    int arr[n];

    printf("\nenter the elements in an array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n enter the key value to search :");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1)
    {
        printf("\nelement found at the index %d", result);
    }
    else
    {
        printf("\n sorry the element you searched doesnot found :( ");
    }
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    else
        {
            return -1;
        }
}
