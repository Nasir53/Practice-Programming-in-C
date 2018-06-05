#include<stdio.h>
int main()
{
  char character[100];
  int i=0,j;
  printf("enter characters[or 'q'to quit]:");
  for(;;)
  {
    character[i]=getchar();
    if(character[i]=='q')
    break;
    putchar(character[i]);
    i++;
  }
  printf("\nreverse character is:");

  printf("\n");
  for(j=i-1;j>=0;j--)
  putchar(character[j]);

}
