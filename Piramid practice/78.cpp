#include<stdio.h>
int main()
{
    int n=7,m=n/2+1,i,j,k;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            if(i==1&&j==1||i==1&&j==n||i==m&&j==1||i==m&&j==n)
                printf("  ");
            else if((i==1||i==m||j==1||j==n))
                printf("* ");
            else
                printf("  ");
        puts("");
    }
}
