#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
int deg;
float rad;
printf("deg=");
scanf("%d",&deg);
rad=(pi/180)*deg;
printf("so, rad= %f",rad);
getch();
return 0;
}
