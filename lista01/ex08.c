#include <stdio.h>

    int main(){

        int a, b, p;

        printf("Type in a number: ");
        scanf("%d", &a);

        printf("Type in another number: ");
        scanf("%d", &b);

        p = (a / b) * 100;

        printf("%d is %d%% of %d\n", a, p, b);
    }