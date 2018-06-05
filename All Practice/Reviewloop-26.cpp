#include<stdio.h>

int main()
{
 int i,j,k=0;
 for(i=1;i<=3;i++)
   for(j=1;j<=i;j++)
     {
       k=k+i+j;
       if(k%2==0)
       k=k*2;
       else if(k%3==0)
       k=k*3;
     }
   printf("k=%d",k);

  return 0;

}
