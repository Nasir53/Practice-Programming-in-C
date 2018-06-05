#include<stdio.h>
int main()
{
    int n=4,m=9,i,j,k,l;
    for(i=m;i>=1;i--)
    {
        n--;
        for(k=i;k<=m;k++)
            printf("%d",k);
        for(k=m-1;k>=i;k--)
            printf("%d",k);
        puts("");
        if(n==0) break;
    }
}
