#include<stdio.h>
int main()
{
    int n=4,m=n,i,j,k;
    for(i=1;i<=n;i++,m++)
    {
        for(j=i;j<=m;j++)
        {
            k=(j>n)?j-n:j;
            printf("%d",k);
        }
        puts("");
    }
}
