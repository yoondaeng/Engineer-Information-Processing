#include <stdio.h>

int main() {
    int num = 13;
    int binary[20], i = 0;
    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    for (int j = i-1; j>=0; j--) {
        printf("%d", binary[j]); // 1101
    }
    return 0;
}