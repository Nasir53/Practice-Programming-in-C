#include<stdio.h>
int main()
{
    int n=9,i,j,k;
    for(i=n;i>=1;i-=2)
    {
        for(j=1;j<=i;j++)
            printf("*");
        puts("");
    }
}
