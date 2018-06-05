#include<stdio.h>
int main()
{
int n,i,osum=0,esum=0;
printf("value of range=");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
  if(i%2==0)
  esum=esum+i;
  else
  osum=osum+i;
  }
  printf("\nesum is=%d",esum);
  printf("\nosum is=%d",osum);

return 0;
}
