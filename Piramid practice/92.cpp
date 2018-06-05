#include<stdio.h>
int main()
{
    int n=5,i,j,k,l;
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("%d",k);
        for(l=n;l>i;l--)
            printf("%d",l-1);
        puts("");
    }
}
