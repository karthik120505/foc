#include <stdio.h>

int main() {
    int number, count = 0;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Total number of digits: %d\n", count);

    return 0;
}

