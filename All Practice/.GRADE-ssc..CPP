#include<stdio.h>
#include<conio.h>
int main()
{
int mark;
printf("Mark=");
while(scanf("%d",&mark)==1)
{
if(mark>=0 && mark<=100){
printf("\nvalid mark");
if(mark>=80 && mark<=100)
printf("\nGrade is: A+ \nGrade point is:5.00");
if(mark>=70 && mark<=79)
printf("\nGrade is: A \nGrade point is:4.00");
if(mark>=60 && mark<=69)
printf("\nGrade is: A- \nGrade point is:3.50");
if(mark>=50 && mark<=59)
printf("\nGrade is: B+ \nGrade point is:3.00");
if(mark>=40 && mark<=49)
printf("\nGrade is: C+ \nGrade point is:2.00");
if(mark>=33 && mark<=39)
printf("\nGrade is: D+ \nGrade point is:1.00");
if(mark>=0 && mark<=32)
printf("\nGrade is: FAILED \nGrade point is:0.00");
}
else
printf("Invalid mark");
}
getch();
return 0;

}
