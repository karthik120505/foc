#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int count = 0,i;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}

