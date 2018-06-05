#include<stdio.h>
int main()
{
    int i,j,k,l,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        for(l=1;l<i;l++)
            printf("*");
        puts("");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=1;k<=n-i;k++)
            printf("*");
        for(l=1;l<n-i;l++)
            printf("*");
        puts("");
    }
}
