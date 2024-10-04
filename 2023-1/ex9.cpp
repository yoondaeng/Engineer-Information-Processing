#include <stdio.h>

int main() {
    int input = 101110;
    int di = 1;
    int sum = 0;

    while (1) {
        if (input == 0) break;
        else {
            sum = sum + (input % 10) * di;
            di = di * 2;
            input = input / 10;
        }
    }

    printf("%d", sum);

    return 0;
}