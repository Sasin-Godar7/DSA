#include<stdio.h>
#include<stdlib.h>
void hanoi(int , char , char , char );


int main()
{
    hanoi(3,'A','B','C');
    return 0;
}

void hanoi(int n,char rodFrom,char rodMiddle,char rodTo)
{
    if(n==1)
    {
        printf("disk 1 moved from %c to %c\n",rodFrom,rodTo);
        return ;
    }
    hanoi (n-1,rodFrom,rodTo,rodMiddle);
    printf("disk %d moved from %c to %c \n",n,rodFrom,rodTo);
    hanoi(n-1,rodMiddle,rodFrom,rodTo);
}  