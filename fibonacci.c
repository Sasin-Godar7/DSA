#include <stdio.h>

int fibo(int);

int main()
{
    int i,num;
    printf("enter how many terms you want to find >>");
    scanf("%d", &num);

    for (i = 0; i <num; i++)
    {
        printf(" %d\t", fibo(i));
    }
    return 0;
}

int fibo(int i)
{
    if (i == 0)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    else
    {
        return fibo(i- 1) + fibo(i - 2);
    }
}