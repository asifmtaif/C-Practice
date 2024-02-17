#include<stdio.h>
int main(){
    int x,y,z,largest, smallest;

    printf("Enter three number: ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z){
        largest=x;
    }
    else if(y>x && y>z){
        largest=y;
    }
    else if (z>x && z>y){
        largest= z;
    }

    if (x==y){
        if(x>z){
            largest=x;
        }
        else{
            smallest=x;
        }
    }
    else if (y==z){
        if (y>x){
            largest=y;
        }
        else{
            smallest=y;
        }
    }
    printf("Largest number: %d\n",largest);

    if(x<y && x<z){
        smallest=x;
    }
    else if(y<x && y<z){
        smallest=y;
    }
    else if (z<x && z<y){
        smallest= z;
    }
    printf("smallest number: %d\n",smallest);

    if (largest %2==0){
        printf("largest number is even\n");
    }
    else{
        printf("Largest number is odd\n");
    }

     if (smallest  %2==0){
        printf("smallest number is even\n");
    }
    else{
        printf("smallest number is odd\n");
    }

return 0;
}
