#include <stdio.h>

int r1() {
    return 4;
}

int r10() {
    return (30 + r1()); //34
}

int r100() {
    return (200+r10()); // 234
}

int main() {
    printf("%d\n", r100()); // 234
    return 0;
}