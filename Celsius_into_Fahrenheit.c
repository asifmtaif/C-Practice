#include <stdio.h>
int main(){
    float c,fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);

    fahrenheit =( (c*9)/5)+32;

    printf("Fahrenheit:%f",fahrenheit);

return 0;
}
