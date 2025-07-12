#include<stdio.h>
int binarySearch(int arr[] , int left , int right , int key);

int main()
{
    int result , n , key,i;
    printf("enter the size of an array :");
    scanf("%d",&n);

    int arr[n];
    printf("\n enter the values in the array >>");
    for(i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n enter the key value to search >>");
    scanf("%d",&key);

  result= binarySearch(arr, 0 , n-1 , key);

  if(result!=-1)
  {
    printf("\n the key value found at the index %d",result);
  }
  else{
    printf("\n sorry the key value doesnot found at the aaray ....");
  }
}

int binarySearch(int arr[] , int left , int right , int key)
{

    if(left > right)
    {
        return -1;
    }

    int mid = (left + right) / 2;

    if(arr[mid] == key)
    {
        return mid;
    }
    else if(key < arr[mid])
    {
        return binarySearch(arr,left , mid-1,key);
    }
    else
    {
        return binarySearch(arr,mid+1, right,key);
    }

}