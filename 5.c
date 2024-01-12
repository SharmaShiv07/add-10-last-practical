#include <stdio.h>

void countAndDisplayDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                // Display the indices only for the first occurrence
                if (count == 1) {
                    printf("Element %d is duplicate and found at indices: %d, %d", arr[i], i, j);
                } else {
                    printf(", %d", j);
                }
                // Mark the duplicate element as visited (set to a unique value, like INT_MIN)
                arr[j] = INT_MIN;
            }
        }
    }

    if (count == 0) {
        printf("No duplicate elements found in the array.\n");
    } else {
        printf("\n");
    }
}

int main() {
    // Example usage

    // You can modify this array with your own values
    int array[] = {2, 4, 6, 8, 2, 7, 4, 9, 1, 6, 2};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    countAndDisplayDuplicates(array, size);

    return 0;
}
