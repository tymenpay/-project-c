#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", isPalindrome(x));

    return 0;
}
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    long x2 = x;
    long result = 0;
    int length = snprintf("NULL", 0, "%d", x);
    for (int i = 0; i < length; i++, x /= 10) {
        result = result * 10 + (x % 10);
    }
    return x2 == result;
}