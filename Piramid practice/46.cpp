#include<stdio.h>
int main()
{
    int i,j,k,n=6,m;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i+1;j++)
    printf("%d",j);
    for(j=n-i+1;j>=1;j--)
    printf("%d",j);
        printf("\n");

    }
    }
