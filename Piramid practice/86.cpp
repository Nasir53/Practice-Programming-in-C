#include<stdio.h>
int main()
{
    int n=5,i,j,k,l=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(k=i;k>1;k--)
            printf("%d ",k-1);
        puts("");
    }
}
