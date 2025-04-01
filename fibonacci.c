#include<stdio.h>

int fibo(int);
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
return 0;
    
}

int fibo(int i){
    if(i==0)
    {
        return 0;
    }
   else if(i==1)
    {
        return 1;
    }
    return fibo(i-1) + fibo(i-2);
}
