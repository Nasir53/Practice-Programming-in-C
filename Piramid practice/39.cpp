#include<stdio.h>
int main()
{
    int n=4,i,j,k;
    for(i=n;i>=1;i--)
    {
        for(k=1;k<n-i+1;k++)
            printf("  ");
        for(j=i+(i-1);j>=1;j--)
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
