#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {  // Check if the number is even
            sum += i;
            printf("%d , ", sum);  // Print the sum after each addition
        }
    }

    printf("\nEnd of the program\n");  // Print end message
    return 0;
}