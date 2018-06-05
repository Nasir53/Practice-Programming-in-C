#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float sum;
int    n;
sum=0;
for(n=1;n<=10;++n)
   {
    sum=sum+1/(float)n;
    printf("%2d %6.4f\n",n,sum);
 }
getch();
return 0;

}