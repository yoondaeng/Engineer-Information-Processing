#include<stdio.h>

int func(char *p) {
    int cnt = 0;
    while(*p != '\0') {
        cnt++;
        p++;
    }
    return cnt;
}

int main() {
    char *p1 = "2022";
    char *p2 = "202210";
    int i = func(p1); // 4
    int j = func(p2); // 6
    printf("%d", i+j); // 10
    return 0;
}