#include<stdio.h>
int main()
{
    int n=5,i,j,k=1,l=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(i%2==0)
            {printf("%c ",l+64);l++;}
            else
            {printf("%d ",k);k++;}
        }
        puts("");
    }
}
