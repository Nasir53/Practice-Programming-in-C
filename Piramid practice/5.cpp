#include<stdio.h>
int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("@ ");
        puts("");
    }
    return 0;
}
