#include <stdio.h>

    int main(){
        int a;

        printf("Type in a number: ");
        scanf("%d", &a);

        if (a < 0){
         a = 0;
        }
        if (a > 0){
         a = 10;
        }
        printf("%d\n", a);

        return 0;

    }
