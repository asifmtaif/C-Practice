//Write a C program to calculate the sum of the Fibonacci series upto N-th term:
#include<stdio.h>
int main(){
  int i,n,x,p,y,sum=0;

  x=0;
  y=1;
  printf("enter a number of term=");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    printf("%d,",x);
    //sum+=x;
    p=x+y;
    x=y;
    y=p;

  }
  //printf(" sum of the fibonacci series=%d",sum);
return 0;
}
