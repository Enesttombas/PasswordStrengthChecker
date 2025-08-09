#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    // Ask the user to enter a password
    printf("Enter your password: ");
    scanf("%49s", password); // %49s prevents buffer overflow

    // Check each character in the password
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) hasUpper = 1;      // Contains uppercase letter
        else if (islower(password[i])) hasLower = 1; // Contains lowercase letter
        else if (isdigit(password[i])) hasDigit = 1; // Contains number
        else hasSpecial = 1;                         // Contains special character
    }

    // Calculate password score
    int score = 0;
    if (strlen(password) >= 8) score += 2; // Longer passwords are stronger
    else score += 1;

    score += hasUpper + hasLower + hasDigit + hasSpecial;

    // Show password strength result
    printf("\nPassword strength: ");
    if (score >= 6) printf("Strong ✅\n");
    else if (score >= 4) printf("Medium ⚠️\n");
    else printf("Weak ❌\n");

    return 0;
}
