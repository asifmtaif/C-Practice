#include <stdio.h>
int main(){
    int n;
    printf ("Enter a number: ");
    scanf("%d", &n);

    int years, days;

    years= n/365;
    days= n-(years*365);

    printf("%d years %d days", years, days);

return 0;
}

