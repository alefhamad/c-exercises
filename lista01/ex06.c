#include <stdio.h>

    int main(){

        int b, h, area, perimeter;

        printf("Type in the base: ");
        scanf("%d", &b);

        printf("Type in the height: ");
        scanf("%d", &h);

        area = b * h;
        perimeter = 2 * (b + h);

        printf("The area is %d and the perimeter is %d\n", area, perimeter);
    }