#include<stdio.h>
int main()
{
    int n=4,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
            printf("  ");
        for(j=1;j<=i+(i-1);j++)
        {
            if(j<=i)
                printf("%c ",64+j);
            else
                printf("%c ",64+i+i-j);
        }
        puts("\n");
    }
    return 0;
}
