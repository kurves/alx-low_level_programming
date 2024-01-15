#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}
