#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf("\t");
        for(k=5;k>=i;k--)
            printf("#\t");
        puts("");
    }
    return 0;
}
