#include<stdio.h>
int main()
{
    int n=5,m=9,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,m-=2)
            printf("%d ",m);
        puts("");
    }
}
