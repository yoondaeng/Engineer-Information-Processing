#include <stdio.h>

int main() {
    int i = 0, c = 0;
    while (i < 10) {
        i++;
        c*=i; // c = 0이므로 0 * i = 0
    }
    printf("%d", c); // 0
}