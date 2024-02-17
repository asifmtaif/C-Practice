//Write a C program to check whether a number is prime or not.
#include<stdio.h>
int main(){
   int i,n;
   printf("enter a number=");
   scanf("%d",&n);

   for(i=2;i<=n/2;i++){
    if(n%i==0){
        printf("%d is not a prime number");
        break;
    }
   }
   if (i==n){
    printf("%d is a prime number",n);
   }
return 0;
}
