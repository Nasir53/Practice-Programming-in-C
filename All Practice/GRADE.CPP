#include<stdio.h>
#include<conio.h>
int main()
{
int grade;
printf("value of grade=");
scanf("%d",&grade);
if(grade>=0 && grade<=100 )
printf("valid mark\n");
else
printf("invalid mark\n");
if(grade>=80 && grade<=100)
printf("A+");
if(grade>=70 && grade<=79)
printf("A");
if(grade>=60 && grade<=69)
printf("A-");
if(grade>=50 && grade<=59)
printf("B+");
if(grade>=40 && grade<=49)
printf("C+");
if(grade>=33 && grade<=39)
printf("D+");
if(grade>=0 && grade<=32)
printf("FAILED");
getch();
return 0;



}
