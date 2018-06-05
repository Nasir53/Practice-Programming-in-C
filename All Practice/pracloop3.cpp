#include<stdio.h>
int main()
{
int i;
for(i=0;i<=10;i++)
 {
   if(i==0)
   continue;
   if(i==3)
   break;
   printf("%d",i);
 }

}
