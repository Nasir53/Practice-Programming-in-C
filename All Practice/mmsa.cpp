#include<stdio.h>

int main()
{
int i,n,sum=0,max=0,min=5000,avg,item;
printf("Enter how many number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
   scanf("%d",&item);
   sum=sum+item;
   if(max<item){
   max=item;}
   if(min>item){
   min=item;}
   avg=(float)sum/n;
  }
   printf("\nsum=%d",sum);
   printf("\navg=%d",avg);
   printf("\nmax=%d",max);
   printf("\nmin=%d",min);


return 0;

}
