#include <stdio.h>

int main() {
    int num, original, reversed = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
