#include<stdio.h>
int main()
{
    int n=6,m=n/2+1,i,j,k;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            if((i==1||i==m||j==1||j==n))
                printf("* ");
            else
                printf("  ");
        puts("");
    }
}
