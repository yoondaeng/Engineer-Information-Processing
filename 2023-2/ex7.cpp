#include <stdio.h>

int main() {
    int c = 0;
    for (int i = 1; i <= 2023; i++)
        if (i % 4 == 0) c++; // 1~2023일 때의 4의 배수를 구하시오
    printf("%d", c); // 2023 / 4 = 505
}