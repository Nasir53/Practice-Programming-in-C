#include<stdio.h>
#include<conio.h>
int main()
{
//clrscr();
int a,b,c,d;
 printf("\na= \nb= \nc=\n");
 scanf("%d%d%d",&a,&b,&c);
 d=a;
 a=b;
 b=c;
 c=d;
 printf("\na is:%d",a);
 printf("\nb is:%d",b);
 printf("\nc is:%d",c);
 getch();
 return 0;


}
