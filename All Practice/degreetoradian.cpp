#include<stdio.h>
#define pi 3.14
int main()
{
 int degrees=0;
 double radians;
 printf("Degrees to radians\n");
 do
 {
   radians=degrees*pi/180;
   printf("%6d%9.6f\n",degrees,radians);
   degrees+=10;
 }
 while(degrees<=360);

}
