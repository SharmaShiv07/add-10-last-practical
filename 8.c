#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

// Define a structure to store name and address
struct Person {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
};

// Custom comparison function for qsort
int compareNames(const void *a, const void *b) {
    return strcmp(((struct Person *)a)->name, ((struct Person *)b)->name);
}

int main() {
    int n;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    // Dynamically allocate an array of structures
    struct Person *people = (struct Person *)malloc(n * sizeof(struct Person));
    // Read names and addresses
    for (int i = 0; i < n; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Enter address for person %d: ", i + 1);
        scanf(" %[^\n]s", people[i].address);
    }

    // Sort the array of structures based on names
    qsort(people, n, sizeof(struct Person), compareNames);

    // Print the sorted names and addresses
    printf("\nAlphabetically Sorted Names and Addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %-20s Address: %s\n", people[i].name, people[i].address);
    }
    // Free dynamically allocated memory
    free(people);
    return 0;
}
