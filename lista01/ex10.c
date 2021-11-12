#include <stdio.h>

    int main(){

        int a;

        printf("Type in a number: ");
        scanf("%d", &a);

        printf("Result: %d\n", 1 -(a%2));
    }