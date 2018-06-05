#include<stdio.h>
int main()
{
    int n=3,j,i,k,l=0;
    for(i=1;;i+=2+l-1)
    {
        n--;
        for(k=1;k<=i;k++)
            printf("* ");
        l++;
        if(n==0) break;
        puts("");
    }
}
