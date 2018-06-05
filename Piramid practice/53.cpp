
#include<stdio.h>
int main()
{
    int i=0,j=0,k,n=5,m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
           printf("3");
          if(i!=1&&i!=n&&j!=1&&j!=n&&(i==2||i==n-1||j==2||j==n-1))
           printf("2");
           if(i==3&&j==3)
           printf("1");
        }
            printf("\n");
    }
}

