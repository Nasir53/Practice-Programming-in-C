#include<stdio.h>
#include<conio.h>
void stat(int i);
int main()
{
    for(int i=1;i<=10;i++)
        stat(i);
    getch();

}

void stat(int i)

{
    static int x=0;
    if(x%i==0)
    {
        x+=2;
        printf("X=%d\n",x);

    }
    return;
}
