#include <stdio.h>
int main(){
    float salary, rent,total;

    printf("Enter the basic salary: ");
    scanf("%f", &salary);
    printf("Enter percentage of basic salary which determines the house rent:");
    scanf("%f", &rent);

    total= salary +((salary*rent)/100);

    printf("the total salary:%f",total);

return 0;
}
