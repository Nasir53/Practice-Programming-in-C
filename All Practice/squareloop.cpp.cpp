#include<stdio.h>
int main()
{
    int i,n,v,k;
    printf(" n   n^2   n^3\n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
       for(k=1;k<=n;k++)

        v=i*i;
        k=v*i;
        printf("%d",i);
        printf("\t%d",v);
        printf("\t%d",k);
        printf("\n");
     }

}
