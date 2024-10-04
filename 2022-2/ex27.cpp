#include <stdio.h>

int main() {
    int a[4] = {0, 2, 4, 8};
    int b[3] = {};
    int i = 1;
    int sum = 0;
    int *p1;

    for (i; i < 4; i++) { // 1부터 시작해서 3까지 반복
        p1 = a + i; // a 배열의 i번째 요소 a[i] 2 4 8
        b[i-1] = *p1 - a[i-1]; // 2 2 4
        sum = sum + b[i-1] + a[i]; // 2 + 2 + 4 + 2 + 8 + 4 = 22
    }

    printf("%d", sum); // 22

    return 0;
}