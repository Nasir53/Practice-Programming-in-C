#include<stdio.h>
int main()
{
    int n=3,i,j=1,k,l=0;
    for(i=1;;i+=2+l-1)
    {
        n--;
        for(k=1;k<=i;k++,j+=2)
            printf("%2d ",j);
        puts("");
        l++;
        if(n==0) break;
    }
}
