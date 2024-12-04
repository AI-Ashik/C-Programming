#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the triangle
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Generate the triangle
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}


// ******
// *****
// ****
// ***
// **
// *
