
#include<stdio.h>
int main()
{
    int i=0,j=0,k,n=5,m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n)
           printf("1");
           if((j==2&&i!=3)||(j==4&&i!=3))
           printf("2");
           if(j==3&&i!=2&&i!=3&&i!=4)
           printf("3");
           if((i==2&&j==3)||(i==3&&j==2)||(i==3&&j==3)||(i==3&&j==4)||(i==4&&j==3))
           printf(" ");

        }
            printf("\n");
    }
}

