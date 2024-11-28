// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("Problem 01 \n");
    int numbers[5];
    
    printf("Enter 5 numbers : \n");
    for (int i= 0; i<5; i++){
        printf("Enter number %d :  ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("Printing index 3 value: %d", numbers[3]);
    
    printf("\n\n Problem 02 \n");
    
    int newNumbers[5];
    for (int i =5;i>0;i--){
        newNumbers[5-i] = numbers[i-1];
    }
    
    for (int i= 0; i<5; i++){
        printf("%d, ", newNumbers[i]);
    }
    

    return 0;
}