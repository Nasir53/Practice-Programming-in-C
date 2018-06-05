#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
            printf("  ");
        for(j=n;j>=i;j--)
            printf("%d ",(n-j+1));
        puts("");
    }
    return 0;
}
