#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns for the square
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Generate the square
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

// *****
// *****
// *****
// *****
