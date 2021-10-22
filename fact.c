#include<stdio.h>
 int fact(int n)
    {
        if(n<=1)
         return 1;
        else
         return n*fact(n-1);
    }
 int main()
    {
        int x;
        printf("enter the number\n");
        scanf("%d",&x);
        printf("factorial of %d is %d",x,fact(x));
        return 0;
    }
