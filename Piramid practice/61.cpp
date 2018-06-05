#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=i;j<=5;j++)
            printf("%d ",j);
        puts("");
    }

}
