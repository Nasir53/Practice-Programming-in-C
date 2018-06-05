#include<stdio.h>
#include<conio.h>
int main()
{
 int unit;
 float amount;

 printf("Enter your unit:");
 while(scanf("%d",&unit)==1)
  {
    if(unit>=0 && unit<=200)
    {
     amount=.5*unit;
     printf("\nSo,the bill is=.2%f",amount);
    }
    else if(unit>=201 && unit<=500)
    {
     amount=(100+.65*(unit-200));
     printf("\nSo,the bill is=%f",amount);
    }
    else if(unit>=501 && unit<=700)
    {
     amount=(230+0.8*(unit-500));
     printf("\nSo,the bill is=%f",amount);
    }
    else if(unit>=701)
    {
     amount=(390+1*(unit-700));
     printf("\nSo, the bill is=%f",amount);
    }
    else
     printf("Your amount is incorrect");

   }
getch();
return 0;
}
