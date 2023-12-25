#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if (n < 10000 || n > 99999) {
        printf("Invalid input. Please enter a five-digit integer.\n");
    } else {
        int digit_sum = 0;
        // Calculate the sum of digits
        digit_sum += n % 10;   // Extract and add the last digit
        n /= 10;              // Remove the last digit
        digit_sum += n % 10;   // Extract and add the next digit
        n /= 10;              // Remove the next digit
        digit_sum += n % 10;   // Repeat for the remaining digits
        n /= 10;              // Remove the next digit
        digit_sum += n % 10;
        n /= 10;              // Remove the next digit
        digit_sum += n % 10;
        printf("%d\n", digit_sum);
    }
    return 0;
}