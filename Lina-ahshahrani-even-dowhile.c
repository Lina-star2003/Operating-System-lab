#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    do {
        if (i % 2 == 0) {  // Check if the number is even
            sum += i;
            printf("%d , ", sum);  // Print the sum after each addition
        }
        i++;  
    } while (i <= 100);

    printf("\nEnd of the program\n");  // Print end message
    return 0 ;
}