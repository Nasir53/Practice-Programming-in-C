

#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,x;
printf("a=");
scanf("%d",&a);
x=(a==1)? 20:30;
printf("value of x:%d\n",x);
x=(a==10)? 20:30;
printf("value of x:%d",x);
getch();
return 0;


}