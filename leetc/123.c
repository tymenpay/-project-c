#include <stdio.h>
#include <string.h>
void review(int* arr, int length);

int main() {
    char s[100000];
    scanf("%s", s);
    int lenght = strlen(s);
    int arr[lenght];
    for (int i = 0; i < lenght; i++) {
        switch (s[i]) {
            case 'I':
                arr[i] = 1;
                break;
            case 'V':
                arr[i] = 5;
                break;
            case 'X':
                arr[i] = 10;
                break;
            case 'L':
                arr[i] = 50;
                break;
            case 'C':
                arr[i] = 100;
                break;
            case 'D':
                arr[i] = 500;
                break;
            case 'M':
                arr[i] = 1000;
                break;
        }
    }
    review(arr, lenght);
    return 0;
}
void review(int* arr, int length) {
    int k = 0;
    for (int i = 1; i < length; i++) {
        if (arr[i] > arr[i - 1]) {
            arr[i] = arr[i] - arr[i - 1];
            arr[i - 1] = k;
        }
    }
    int sum = 0;
    for (int j = 0; j < length; j++) {
        sum = arr[j] + sum;
    }
    printf("%d", sum);
}