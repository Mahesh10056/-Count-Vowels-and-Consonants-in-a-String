#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("output.txt", "r"); // Open file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of output.txt:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // Read and print each line
    }

    fclose(file); // Close the file
    return 0;
}