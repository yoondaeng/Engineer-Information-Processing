#include <stdio.h>
int sum(int n) {
    if (n<=0) return 0;
    else return n + sum(n-1); // 5 + sum(4) = 15
    // 4 + sum(3) = 10
    // 3 + sum(2) = 6
    // 2 + sum(1) = 3
    // 1 + sum(0) = 1
}

int main() {
    int result = sum(5);
    printf("%d", result); // 출력: 15
}