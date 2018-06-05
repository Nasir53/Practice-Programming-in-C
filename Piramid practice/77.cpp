#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
            printf("%d",j%2);
        puts("");
    }
}
