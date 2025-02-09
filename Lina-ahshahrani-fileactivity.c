#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    // Create and open the file in write mode
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;  // Exit if file couldn't be opened
    }

    //  Write numbers from 1 to 10 to the file
    for (int i = 1; i <= 10; i++) {
        fprintf(file, "%d\n", i);
    }

    //  Close the file after writing
    fclose(file);

    //  Reopen the file in read mode
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;  // Exit if file couldn't be opened
    }

    //  Read and print the contents of the file
    int number;
    while (fscanf(file, "%d", &number) != EOF) {
        printf("%d\n", number);
    }