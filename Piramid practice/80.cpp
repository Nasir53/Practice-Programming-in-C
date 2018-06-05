#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2==0&&j%2!=0)||(i%2==1&&j%2==0))
                printf("*");
            else
                printf("%d",j);
        }
        puts("");
    }
}
