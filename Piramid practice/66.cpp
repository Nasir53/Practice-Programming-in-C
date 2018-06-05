
#include<stdio.h>
int main()
{
    int i=0,j=0,k,n=5,m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n)
           printf("A");
           if((j==2&&i!=3)||(j==4&&i!=3))
           printf("B");
           if(j==3&&i!=2&&i!=3&&i!=4)
           printf("C");
           if((i==2&&j==3)||(i==3&&j==2)||(i==3&&j==3)||(i==3&&j==4)||(i==4&&j==3))
           printf(" ");

        }
            printf("\n");
    }
}


