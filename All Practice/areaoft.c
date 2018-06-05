#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int h,b;
    float Area,y;

    printf("The value of h:");
    scanf("%d",&h);
    printf("\nThe value of b:");
    scanf("%d",&b);

    Area= 0.5*b*h;
    y=sqrt(Area);

    printf("\nThe Area is:%.2f", Area);
    printf("\n Y is:%.2f",y);
    return 0;
}
