#include<stdio.h>
int main()
{
  int a,b=0,i;
  printf("a=");
  scanf("%d",&a);
  while(a>0)
   {
    i=a%10;
    b=b*10+i;
    a=a/10;
   }
  printf("revers value b=%d",b);
}
