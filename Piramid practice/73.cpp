#include<stdio.h>
int main()
{
    int i,j,n=4,k;
    for(i=1,k=1;i<=n;i++,k+=2)
    {
        for(j=1;j<=k;j++)
            printf("%d",j);
        puts("");
    }
}
