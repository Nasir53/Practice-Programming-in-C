#include<stdio.h>
int main()
{
    int n=6,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
            printf("  ");
        for(j=1;j<=i+(i-1);j++)
                printf("* ");
        puts("");
    }
    return 0;
}
