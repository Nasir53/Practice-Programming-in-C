#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int mark;
printf("Mark=");
while(scanf("%d",&mark)==1)
{
if(mark>=0 && mark<=100){
printf("\nvalid mark");
if(mark>79){
printf("\nGrade is: A+ \nGrade point is:5.00");
}
else if(mark>69){
printf("\nGrade is: A \nGrade point is:4.00");
}
else if(mark>59){
printf("\nGrade is: A- \nGrade point is:3.50");
}
else if(mark>49){
printf("\nGrade is: B+ \nGrade point is:3.00");
}
else if(mark>39){
printf("\nGrade is: C+ \nGrade point is:2.00");
}
else if(mark>32){
printf("\nGrade is: D+ \nGrade point is:1.00");
}
else if(mark>=0){
printf("\nGrade is: FAILED \nGrade point is:0.00");
}
}
else
printf("Invalid mark");
}
getch();
return 0;
}
