#include <stdio.h>
#include <string.h>

// Function to perform binary addition
void addBinary(char bin1[], char bin2[], char result[]) {
    int i = strlen(bin1) - 1;
    int j = strlen(bin2) - 1;
    int carry = 0, k = 0;
    char tempResult[100];

    // Adding binary numbers from right to left
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += bin1[i--] - '0'; // Convert char to int
        }
        if (j >= 0) {
            sum += bin2[j--] - '0'; // Convert char to int
        }

        // Store the binary sum (0 or 1)
        tempResult[k++] = (sum % 2) + '0';
        carry = sum / 2; // Update the carry (1 or 0)
    }

    // Reverse the result string
    for (int m = 0; m < k; m++) {
        result[m] = tempResult[k - m - 1];
    }
    result[k] = '\0'; 
}

int main() {
    char bin1[100], bin2[100], result[100];

    // Input two binary numbers
    printf("Enter first binary number: ");
    scanf("%s", bin1);
    printf("Enter second binary number: ");
    scanf("%s", bin2);

    // Perform binary addition
    addBinary(bin1, bin2, result);

    // Output the result
    printf("Sum: %s\n", result);

    return 0;
}
