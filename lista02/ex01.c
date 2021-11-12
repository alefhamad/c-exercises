#include <stdio.h>

    int main(){

        int a;

        printf("Type a whole numer: ");
        scanf("%d", &a);

        if(a < 0){
            a = -a;
        }
        printf("Result: %d\n", a);
    }