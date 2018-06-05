#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==2||i==4)
            printf("%c",j+64);
            else
                printf("%d",j);

        }
        puts("");
    }
}
