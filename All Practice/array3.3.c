#include<stdio.h>
#define row 3
#define column 3

void main()
{
    int a,b,c,z[row][column]={1,2,3,4,5,6,7,8,9};
    for(a=0;a<row;a++)
    for(b=0;b<column;b++){
        printf("%d",z[b][a]);}
    getch();
}
