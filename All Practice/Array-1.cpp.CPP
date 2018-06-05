#include<stdio.h>
#include<conio.h>
int main()
{
 int m[5],i,sum=0,max=-1,min=101;
 float avg;
 printf("Enter your marks=");
 for(i=0;i<5;i++)
    {scanf("%d",&m[i]);
     sum=sum+m[i];
     if(m[i]>max)
       max=m[i];
     if(m[i]<min)
       min=m[i];
     avg=(float)sum/5;
    }
 printf("\nm[3]=%d",m[3]);
 printf("\nsum=%d",sum);
 printf("\nmax=%d",max);
 printf("\nmin=%d",min);
 printf("\navg=%f",avg);
 getch();
 return 0;

}
