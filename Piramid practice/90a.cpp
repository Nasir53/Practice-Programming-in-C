#include<stdio.h>
int main()
{
    int n=11,m,i,i2,j,k,l;
    m=n/2+1;
    for(i=m,i2=0;i>=1;i--,i2++)
    {
        for(j=1,k=m-1;j<=n;j++,k--)
        {
            if(k+i==m||j-i2==m)    printf("*");
            else     printf("#");
        }
        puts("");
    }
}
