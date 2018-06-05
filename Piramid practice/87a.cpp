#include<stdio.h>
int main()
{
    int n=4,i,j,k,l;
    for(i=1,l=1;i<=n*2;i+=2,l++)
    {
        for(j=1;j<=i;j++)
            if(j%2==0)  printf("*");
            else    printf("%d",l);
        puts("");
    }

    for(i=n*2,l=4;i>=1;i-=2,l--)
    {
        for(j=i-1;j>=1;j--)
            if(j%2==0)  printf("*");
            else    printf("%d",l);
        puts("");
    }
}
