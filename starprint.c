#include <stdio.h>

int main() {

//3.
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
//* * * * *
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=0; k<=i; k++) {
            printf(" ");
        }
        for(int j=0; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
