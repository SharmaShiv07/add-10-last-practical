#include <stdio.h>

void printUpperTriangular(int matrix[3][3]) {
    printf("Upper Triangular Matrix:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Print only elements above the main diagonal
            if (i <= j) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main() {
    // Example usage

    // You can modify this matrix with your own values
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printUpperTriangular(matrix);

    return 0;
}
