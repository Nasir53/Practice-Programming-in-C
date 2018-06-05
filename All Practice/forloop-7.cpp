#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)

      printf("A");
    for(j=1;j<=5-i;j++)
      printf("B");


  printf("\n");
 }

return 0;

}
