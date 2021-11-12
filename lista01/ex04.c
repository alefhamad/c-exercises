#include <stdio.h>

    int main(){

        int a, b, c;

        printf("Type in a numer: ");
        scanf("%d", &a);

        printf("Type in another number: ");
        scanf("%d", &b);

        printf("The quotient is: %d, and the remainder is: %d\n", a/b, a%b);
    }