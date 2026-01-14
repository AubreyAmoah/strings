#include <stdio.h>
#include <stdlib.h>

// Function to implent own version of strlen
int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


// Entry point of the program
int main() {
    char test_string[] = "Hello, World!";
    printf("Length of string: %d\n", my_strlen(test_string));
    return 0;
}