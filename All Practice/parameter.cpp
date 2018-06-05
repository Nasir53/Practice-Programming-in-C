#include<stdio.h>
#include<conio.h>

//int find_sum(int a,float);

void find_sum(int a,float b)
{

    int sum;
    float sum2;
    sum=a+b;
    sum2=a+b;

    printf("The sum is:%d",sum);
    printf("\nAgain the sum2 is:%.2f",sum2);

}
int main()
{
    //int find_sum(int a,float);
    int a=10;
    float b=15.25,avg;
    avg=b/a;
    find_sum(a,b);

    printf("\nThe avrg is:%.2f",avg);

    getch();
    //return 0;

}
