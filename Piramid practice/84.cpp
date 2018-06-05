#include<stdio.h>
int main()
{
    int n=7,i,j,k,l=1;
    for(i=1;i<=n;i++)
    {
        k=i%2?1:2;
        for(j=1;j<=k;j++,l++)
            printf("%d",l);
        puts("");
    }
}
