//Write a C program to calculate the factorial of a number.
#include<stdio.h>
int main (){
    int i,n,factorial=1;
    printf("enter a number for factorial=");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        factorial*=i;
    }

    printf("factorial of the number=%d",factorial);
return 0;
}
