#include<stdio.h>
int main()
{
    int a,b,i;
    printf("a=");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        printf("%d",b);
    }
    //printf("\n");
    return 0;

}
