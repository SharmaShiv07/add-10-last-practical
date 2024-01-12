#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Custom comparison function for qsort
int compare(const void *a, const void *b) {
    char str1[20], str2[20];

    // Convert integers to strings
    sprintf(str1, "%d", *(const int *)a);
    sprintf(str2, "%d", *(const int *)b);

    // Concatenate and compare
    strcat(str1, str2);
    strcat(str2, str1);

    return strcmp(str2, str1);
}

void printLargestInteger(int A[], int n) {
    // Sort the array using the custom comparison function
    qsort(A, n, sizeof(int), compare);

    // Print the sorted array as the largest integer
    printf("Largest Integer: ");
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

int main() {
    // Example usage

    // You can modify this array with your own values
    int A[] = {944, 9, 0, 45};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printLargestInteger(A, n);

    return 0;
}
