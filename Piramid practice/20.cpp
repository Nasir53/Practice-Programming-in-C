#include<stdio.h>
int main()
{
    int n=4,i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",k++);
        puts("");
    }
}
