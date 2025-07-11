#include <stdio.h>
int fact(int);
int main()

{
    int num;
    printf("enter the number to find the factorial :");
    scanf("%d",&num);

    int result = fact(num);

    printf("\nthe factorial of %d is %d",num,result);

}

int fact(int num)
{
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num -1);
    }
    
}


