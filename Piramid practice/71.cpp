#include<stdio.h>
int main()
{
    int n=4,m,i,j,k,l=1;
    for(i=1;i<=n;i++)
    {

        for(j=i,k=l;j<=n;j++,k++)
        {
            m=(k>n)?k-n:k;
            printf("%c",m+64);
        }
        puts("");
        do l++; while(l%2!=1);
    }
}
