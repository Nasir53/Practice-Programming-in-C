#include<stdio.h>
//#include<conio.h>
int main()
{
//clrscr();
char letter;
printf("letter=");
scanf("%c",&letter);
switch(letter)
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   printf("vowel");break;
   default:
   printf("consonant");break;
  }
//getch();
return 0;

}
