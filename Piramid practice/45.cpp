#include<stdio.h>
int main()
{
    int i,j,k,n=5,m;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        printf("  ");
    for(j=1;j<=i;j++)
    printf("%d ",j);
    for(m=i+1;m<=i+i-1;m++)
    printf("%d ",m);
    printf("\n");}



}



