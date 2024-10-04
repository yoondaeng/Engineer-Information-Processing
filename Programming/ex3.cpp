#include <stdio.h>
int main() {
    int n = 10;
    while(n>0) {
        printf("%d ", n);
        n--; // 출력: 10 9 8 7 6 5 4 3 2 1
    }

    return 0;
}