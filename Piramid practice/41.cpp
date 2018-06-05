#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
                printf("%c ",64+j);

        puts("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("%c ",64+j);
        puts("\n");
    }
    return 0;
}
