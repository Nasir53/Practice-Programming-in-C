
#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=n-i+1;j--)
            printf("%d",j);
        printf("\n");
    }
}
