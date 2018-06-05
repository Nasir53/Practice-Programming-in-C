#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,c=0,sum=0;
printf("value of n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
   if(n%i==0)
   c++;
  }
  if(c==2)
  printf("prime");
  //for(c=i;c<=n;c++)
  //sum=sum+c;
 // printf("\nsum is:%d",sum);}
  else
  printf("not prime");
}
