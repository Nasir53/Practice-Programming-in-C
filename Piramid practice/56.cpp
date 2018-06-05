
#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i+1;j++)
    printf("*");
    for(k=0;k<=i-2;k++)
    printf(" ");
    for(k=0;k<=i-2;k++)
    printf(" ");
    for(j=n-i+1;j>=1;j--)
    printf("*");

    printf("\n");
    }
}
