#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
                printf("%c ",64+j);

        puts("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<n-i+1;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%c ",64+j);
        puts("\n");
    }
    return 0;
}
