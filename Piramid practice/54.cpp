#include<stdio.h>
int main()
{
    int i,j,k,n=10;
    for(i=1;i<=n;i++)
    {
    printf("\n");
    for(j=1;j<=i;j++)
    {if(j==1||i==j)
    printf("*");
    else
    printf(" ");}
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
    printf("*");}

}


