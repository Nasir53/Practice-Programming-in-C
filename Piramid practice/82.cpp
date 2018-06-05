#include<stdio.h>
int main()
{
    int i,j,k,n=3;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf("*");
            for(k=1;k<=n-2;k++)
                printf(" ");
            for(k=1;k<=n-i+1;k++)
                printf("*");
            for(k=1;k<=1;k++)
                printf(" ");
            for(k=1;k<=n-i+1;k++)
                printf("*");
            for(k=1;k<=1;k++)
                printf(" ");
            for(k=1;k<=i;k++)
                printf("*");
            printf("\n");
        }
}
