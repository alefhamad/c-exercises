#include <stdio.h>

    int main(){

        int a, b;

        printf("Type in the first number: ");
        scanf("%d", &a);

        printf("Type in the second number: ");
        scanf("%d", &b);

        if(a > b){
            printf("%d, %d\n", b, a);
        }else{
            printf("%d, %d\n", a, b);
        }
    }