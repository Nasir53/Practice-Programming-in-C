#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
  {
   for(j=1;j<=5-i+1;j++)
   printf("%d",j);

   for(j=1;j<=i-1;j++)
   printf("*");

   printf("\n");
  }
return 0;
}

