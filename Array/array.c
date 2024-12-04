#include <stdio.h>
int main() {
    int arr1[5], arr2[5], i;

    printf("Enter 5 numbers: \n");


    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }


    // for (i = 0; i < 5; i++) {
    //     arr2[i] = arr1[4 - i];
    // }

    // printf("3rd element of arr1[%d] is %d\n", 2, arr1[2]);


    // printf("Reversed array is: \n");
    // for (i = 0; i < 5; i++) {
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");

    int sum = 0;
    
    for (int i= 0; i<5; i++){
        sum += arr1[i];
    }
    
    printf("Sum of all numbers: %d", sum);
    


    return 0;
}
