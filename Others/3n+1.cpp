#include<stdio.h>
#define long long LL
#define swap

int main (){
  int i,j;
  while( scanf("%d %d", &i, &j)!=EOF){
    int ti=i;
    int tj=j;
    if(i>j) swap(i,j);
    int mxcycle_len=0;
    int cycle_len;
    while(i<=j){
         unsigned int n=i;
         cycle_len=1;

         while(n!=1){
            if(n%2==1) n=3*n+1;
            else n/=2;
            cycle_len++;
            }
         if(mxcycle_len<cycle_len)
            mxcycle_len=cycle_len;
         i++;
    }
  printf("%d %d %d\n",ti,tj,mxcycle_len);
  }
 return 0;
 }
