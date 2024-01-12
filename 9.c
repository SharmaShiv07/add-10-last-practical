#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a credit card number is valid
bool isValidCreditCardNumber(const char *creditCardNumber) {
    int sum = 0;
    int digitCount = 0;

    // Iterate through the credit card number from right to left
    for (int i = 15; i >= 0; i--) {
        char currentDigit = creditCardNumber[i];

        // Ignore non-digit characters (e.g., spaces)
        if (isdigit(currentDigit)) {
            int digit = currentDigit - '0';

            // Double every other digit from right to left
            if (digitCount % 2 == 1) {
                digit *= 2;

                // Subtract 9 if the result is greater than 9
                if (digit > 9) {
                    digit -= 9;
                }
            }

            // Sum the digits
            sum += digit;
            digitCount++;
        }
    }

    // Check if the total modulo 10 is equal to 0
    return (sum % 10 == 0);
}

int main() {
    // Example usage

    // You can modify this credit card number with your own input
    char creditCardNumber[17];

    printf("Enter a 16-digit credit card number (without spaces): ");
    scanf("%s", creditCardNumber);

    if (isValidCreditCardNumber(creditCardNumber)) {
        printf("The credit card number is valid.\n");
    } else {
        printf("The credit card number is invalid.\n");
    }
    return 0;
}
