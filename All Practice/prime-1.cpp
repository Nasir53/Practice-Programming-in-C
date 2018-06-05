#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,c=1;
printf("n=");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
  {
   if(n%i==0){
   c=0;
   break;}

  }
  if(c==0)
  printf("not prime");
  else
  printf("prime");
}
