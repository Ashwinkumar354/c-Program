#include<stdio.h>
void main()
    {
        int i,n,a[10];
        printf("enter the number of elements\n");
        scanf("%d",&n);
        printf("enter the array elements\n");
        for(i=0;i<n;i++)
         scanf("%d",&a[i]);
        printf("the array is\n");
        for(i=0;i<n;i++)
         printf("%d\t",a[i]);
    }
