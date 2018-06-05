#include<stdio.h>
int main()
{
    int n=4,i,i2=7,j=1,k,k2,l=0;
    for(i=0;; i+=2+l-1,i2=i2*2)
    {
        n--;
        for(k=1,k2=i2; k<=i; k++,j+=2,k2++)
            printf("%d ",k2);
        puts("");
        l++;
        if(n==0) break;
    }
}
