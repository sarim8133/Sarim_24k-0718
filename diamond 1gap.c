#include <stdio.h>

int main() {
    int size, i, j, space;

  
    printf("Enter the number of rows: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (i = size - 1; i >= 1; i--) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

 
