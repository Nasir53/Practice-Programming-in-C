#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float sum,n,term;
int count=1;

sum=0;
printf("enter value of n\n");
  scanf("%f",&n);
term=1/n;
while(count<=n)
{
    sum=sum+term;
    count++;
}
printf("sum=%f\n",sum);
getch();
return 0;


}