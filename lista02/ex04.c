#include <stdio.h>  

    int main(){

        int grade;

        printf("Enter your grade: ");
        scanf("%d", &grade);

        if(grade >= 6){
            printf("Passed!\n");
        }
        else{
            printf("Failed!\n");
        }    
    }