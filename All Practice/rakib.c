
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("The given number is:");
    scanf("%d \n%d \n%d", &a,&b,&c);
    sum= a+b+c;
    avg= sum/3;
    printf("The sum is:%d",sum);
    printf("\nThe average is:%.2f",avg);
    return 0;

}
