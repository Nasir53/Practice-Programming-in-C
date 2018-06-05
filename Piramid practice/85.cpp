#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
        if(i!=1&&j-1==i)
            printf("1");
        puts("");
    }
}
