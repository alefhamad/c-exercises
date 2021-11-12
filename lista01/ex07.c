#include <stdio.h>

    int main(){

        int a;

        printf("Type in a number to be inverted: ");
        scanf("%d", &a);

        if(a > 0){
            printf("The number is now negative: %d\n", a = -a);


        }else {
            printf("The number is now positive: %d\n", a = a - (a * 2));
            
        }
    }