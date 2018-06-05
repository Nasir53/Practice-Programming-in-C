#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            if(i%2==j%2)    printf("A");
            else    printf("B");
        puts("");
    }
}
