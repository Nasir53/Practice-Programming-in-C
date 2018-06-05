#include<stdio.h>
#include<conio.h>
int main()
{
 int day,month,year;
 printf("\nday: month: year:");
 scanf("%d%d%d",&day,&month,&year);
 if (day>=0 && day<=31)
 {
  switch(day)
   {
    case 1:
      printf("1st");
      break;
    case 2:
      printf("2nd");
      break;
    case 3:
      printf("3rd");
      break;
    case 21:
      printf("21st");
      break;
    case 31:
      printf("31st");
      break;
    default:
      printf("%dth",day);
      break;
   }
  }
 else
  printf("Error!!!");
  switch(month)
   {
    case 1:printf(" january");break;
    case 2:printf(" february");break;
    case 3:printf(" martch");break;
    case 4:printf(" april");break;
    case 5:printf(" may");break;
    case 6:printf(" june");break;
    case 7:printf(" july");break;
    case 8:printf(" augest");break;
    case 9:printf(" semtember");break;
    case 10:printf(" october");break;
    case 11:printf(" november");break;
    case 12:printf(" december");break;
    default:printf(" Error!!!");
   }
   if(year>=0 && year<=9)
     printf(" 200%d.",year);
   else if(year>99)
     printf("Error!!!");
   else
     printf(" 20%d.",year);

//getch();
return 0;
}
