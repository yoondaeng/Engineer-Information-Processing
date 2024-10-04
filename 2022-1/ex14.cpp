#include <stdio.h>

int func(int a) {
    if (a <= 1) return 1;
    return a * func(a - 1); // 5 * func(4) = 120
    // func(4) = 4 * func(3) = 24
    // func(3) = 3 * func(2) = 6
    // func(2) = 2 * func(1) = 2
}

int main() {
    int a;
    scanf("%d", &a); // 입력: 5
    printf("%d", func(a)); // 120
}