#include<stdio.h>
#include<conio.h>
int main()
{

int mark,grade;
printf("mark:");
while(scanf("%d",&mark)==1)
{
if(mark>=0 && mark<=100){
printf("\nvalid mark");
if(mark>79)
printf("\nGrade=Honours");
else if(mark>59)
printf("\nGrade=First Division");
else if(mark>49)
printf("\nGrade=Second Division");
else if(mark>39)
printf("\nGrade=Third Division");
else if(mark>=0)
printf("\nGrade=Failed");
}
else
printf("\ninvalid mark");
}
getch();
return 0;
}
