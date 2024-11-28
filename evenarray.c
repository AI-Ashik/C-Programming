#include <stdio.h>

int main() {
    int numbers[10];
    int counter = 0;
    int newEvenArray[10];
    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            newEvenArray[counter] = numbers[i];
            counter++;
        }
    }
    
    printf("Even Array: ");
    for (int i = 0; i < counter; i++) {
        printf("%d ", newEvenArray[i]);
    }
    
    return 0;
}
