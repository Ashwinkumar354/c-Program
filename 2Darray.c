#include<stdio.h>
int main()
    {
        int i,j,n,m,a[10][10];
        printf("enter the number of row and column elements\n");
        scanf("%d %d",&m,&n);
        printf("enter the array elements\n");
        for(i=0;i<m;i++)
         for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
        printf("the array is\n");
        for(i=0;i<m;i++)
         {
          for(j=0;j<n;j++)
           printf("%d\t",a[i][j]);
          printf("\n");
         } 
         return 0;
    }
