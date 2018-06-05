#include<stdio.h>
int main()
{
    int n=4,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf(" ");
        l=1;
        for(k=1;k<=i;k++)
        {
            printf("%d ",l);
            l=l*(i-k)/k;
        }
        puts("");
    }
}
