#include<stdio.h>
int main()
{
    int i,j,k,n=5,m;
    for(i=1;i<=n;i++)
    {
    for(j=n-i+1;j<=n-1;j++)
        printf("%d",j);
    for(j=n;j>=n-i+1;j--)
        printf("%d",j);
    printf("\n");
    }
}

