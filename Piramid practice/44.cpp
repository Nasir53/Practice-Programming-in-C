#include<stdio.h>
int main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i+1;j++)
        printf("%d",j);
    for(k=0;k<=i-2;k++)
        printf("_");
    for(k=0;k<=i-2;k++)
        printf("_");
    for(j=n-i+1;j>=1;j--)
        printf("%d",j);

    printf("\n");
    }
}
