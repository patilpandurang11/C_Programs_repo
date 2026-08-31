#include <stdio.h>
#include <ctype.h> // Required for isalpha()

int main() {
    char ch;

    // Request a single character input from the user
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Step 1: Verify if the input is actually a valid letter
    if (!isalpha(ch)) {
        printf("Error! '%c' is not an alphabetic character.\n", ch);
    } 
    // Step 2: Check if it matches any lowercase or uppercase vowel
    else if (ch == 'a' || ch == 'A' || 
             ch == 'e' || ch == 'E' || 
             ch == 'i' || ch == 'I' || 
             ch == 'o' || ch == 'O' || 
             ch == 'u' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    } 
    // Step 3: If it's an alphabet but not a vowel, it must be a consonant
    else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}

