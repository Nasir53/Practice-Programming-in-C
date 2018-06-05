#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=n;i>=1;i--)
    {
        for(k=1;k<n-i+1;k++)
            printf("  ");
        for(j=i+(i-1);j>=1;j--)
        {
            if(j<=i)
                printf("%d ",j);
            else
                printf("%d ",i+i-j);
        }
        puts("");
    }
    return 0;
}
