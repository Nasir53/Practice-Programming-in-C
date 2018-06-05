#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,sum=0;
 for(i=1,j=1;j<=100;i++)
   {
     sum=sum+j;
     j=j+i;
   }
   printf("sum is:%d",sum);
getch();
}
