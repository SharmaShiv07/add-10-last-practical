#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count occurrences of any two vowels in succession
int countSuccessiveVowels(char *text) {
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isVowel(text[i]) && isVowel(text[i + 1])) {
            count++;
            printf("Found successive vowels: %c%c\n", text[i], text[i + 1]);
        }
    }

    return count;
}

int main() {
    // Example usage

    // You can modify this string with your own input
    char text[] = "read the question meticulously";

    printf("Input Text: %s\n", text);

    int result = countSuccessiveVowels(text);

    printf("Total number of occurrences of any two vowels in succession: %d\n", result);

    return 0;
}
