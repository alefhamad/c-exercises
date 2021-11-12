#include <stdio.h>

    int main(){

        int a, b, p;

        printf("Type in a number: ");
        scanf("%d", &a);

        printf("Type in another number: ");
        scanf("%d", &b);

        p = (a * 100) / b;

        printf("%d is %d%% of %d\n", a, p, b);
    }