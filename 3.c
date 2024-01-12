#include <stdio.h>

// Function prototypes for arithmetic operations
typedef int (*ArithmeticOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

// Function to perform an arithmetic operation using function pointers
int performOperation(int a, int b, ArithmeticOperation operation) {
    return operation(a, b);
}

int main() {
    int num1, num2;

    // Get input numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function pointers to arithmetic operations
    ArithmeticOperation addPtr = add;
    ArithmeticOperation subtractPtr = subtract;
    ArithmeticOperation multiplyPtr = multiply;
    ArithmeticOperation dividePtr = divide;

    // Perform arithmetic operations using function pointers
    printf("Addition: %d\n", performOperation(num1, num2, addPtr));
    printf("Subtraction: %d\n", performOperation(num1, num2, subtractPtr));
    printf("Multiplication: %d\n", performOperation(num1, num2, multiplyPtr));
    printf("Division: %d\n", performOperation(num1, num2, dividePtr));

    return 0;
}