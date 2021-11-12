#include <stdio.h>

    int main (){

        int a, b;

        printf("Type the fist number: ");
        scanf("%d", &a);

        printf("Type the second number: "); 
        scanf("%d", &b);

        if (b==0){
            printf("INVALID ENTRY\n");
        }
        else{
            printf("Quotient: %d, Remainder: %d\n", a/b, a%b);
        }
        return 0;
    }