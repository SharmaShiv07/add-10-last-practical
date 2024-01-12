#include <stdio.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

// Function to add employee details to the database
void addEmployee(struct Employee database[], int *numEmployees) {
    printf("Enter employee name: ");
    scanf("%s", database[*numEmployees].name);

    printf("Enter employee ID: ");
    scanf("%d", &database[*numEmployees].employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &database[*numEmployees].salary);

    (*numEmployees)++;
}

// Function to display all employee details in the database
void displayEmployees(struct Employee database[], int numEmployees) {
    printf("\nEmployee Database:\n");
    printf("%-20s %-15s %-15s\n", "Name", "Employee ID", "Salary");

    for (int i = 0; i < numEmployees; i++) {
        printf("%-20s %-15d %-15.2f\n", database[i].name, database[i].employeeID, database[i].salary);
    }
    printf("\n");
}

int main() {
    // Maximum number of employees the database can hold
    const int MAX_EMPLOYEES = 100;

    // Array to store employee details
    struct Employee employeeDatabase[MAX_EMPLOYEES];

    // Variable to keep track of the number of employees in the database
    int numEmployees = 0;

    int choice;

    do {
        printf("Employee Database Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numEmployees < MAX_EMPLOYEES) {
                    addEmployee(employeeDatabase, &numEmployees);
                    printf("Employee added successfully.\n");
                } else {
                    printf("Employee database is full. Cannot add more employees.\n");
                }
                break;

            case 2:
                displayEmployees(employeeDatabase, numEmployees);
                break;

            case 3:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}