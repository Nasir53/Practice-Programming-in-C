#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("%c ",64+j);
        puts("\n");
    }
    return 0;
}
