#include<stdio.h>
int main()
{
    int n=5,m=9,i,j,k;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++,m++)
            printf("%d ",(m%10));
        puts("");
    }
}
