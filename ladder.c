// Find  a given no. is neutral or not using ladder if else.

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("You entered a negative number.");
    else if (num > 0)
        printf("You entered a positive number.");
    else
        printf("You entered neutral number");
return 0;
}