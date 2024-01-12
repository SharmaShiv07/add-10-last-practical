#include <stdio.h>

// Function to transpose a 2D array
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2D array
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define the dimensions of the matrix
    const int rows = 3;
    const int cols = 4;

    // Define a 2D array (matrix)
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the original matrix
    printf("Original ");
    displayMatrix(rows, cols, matrix);

    // Declare a new matrix to store the transposed result
    int transposedMatrix[cols][rows];

    // Call the transpose function
    transpose(rows, cols, matrix, transposedMatrix);

    // Display the transposed matrix
    printf("\nTransposed ");
    displayMatrix(cols, rows, transposedMatrix);

    return 0;
}
In this program, the transpose function takes the number of rows and columns, the original matrix, and an empty matrix to store the transposed result. The displayMatrix function is used to display the contents of a 2D array.

In the main function, a sample 3x4 matrix is defined, and the original and transposed matrices are displayed before and after the transpose operation, respectively.





Is this conversation helpful so far?









#include <stdio.h>

// Function to transpose a 2D array
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2D array
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define the dimensions of the matrix
    const int rows = 3;
    const int cols = 4;

    // Define a 2D array (matrix)
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the original matrix
    printf("Original ");
    displayMatrix(rows, cols, matrix);

    // Declare a new matrix to store the transposed result
    int transposedMatrix[cols][rows];

    // Call the transpose function
    transpose(rows, cols, matrix, transposedMatrix);

    // Display the transposed matrix
    printf("\nTransposed ");
    displayMatrix(cols, rows, transposedMatrix);

    return 0;


