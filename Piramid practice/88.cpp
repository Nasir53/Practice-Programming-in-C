#include<stdio.h>
int main()
{
    int n=7,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i)
                printf("* ");
            else
                printf("0 ");
        }
        puts("");
    }
}
