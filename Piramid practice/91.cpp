#include<stdio.h>
int main()
{
    int n=5,i,j,k,l;
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("%d",k);
        for(l=1;l<i;l++)
            printf("%d",l+1);
        puts("");
    }
}
