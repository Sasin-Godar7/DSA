#include <stdio.h>
int fact(int);
int main()

{
    int n, f;
    printf("enter the number ");
    scanf("%d", &n);

    f = fact(n);
    printf("factoral of %d is %d", n, f);
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * (n - 1);
    }
}



