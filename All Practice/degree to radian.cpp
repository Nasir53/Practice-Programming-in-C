#include<stdio.h>
#define pi 3.14
int main()
{
 int degrees;
 double radians;
 printf("degrees to radians\n");
 for(degrees=0;degrees<=360;degrees+=10)
     {
       radians=degrees*pi/180;
       printf("%6d%9.6f\n",degrees,radians);
     }

}
