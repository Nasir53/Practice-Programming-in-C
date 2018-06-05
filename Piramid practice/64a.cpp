#include<stdio.h>
int main()
{
    int n=4,i,i2=1,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=i,k=i;j>=1;j--,k++)
            printf("%d",k);
        k-=2;
        for(l=i;l>1;l--,k--)
            printf("%d",k);
        puts("");
    }
}
