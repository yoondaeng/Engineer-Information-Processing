#include <stdio.h>

int main(){
    int m = 4620;
    int a = m / 1000; // 1000원의 개수
    int b = m % 1000 / 500;
    int c = m % 500 / 100;
    int d = m % 100 / 10;
    // int c = ((m % 1000) % 500) / 100;
    // int d = (((m % 1000) % 500) % 100) / 10;
    printf("1000원의 개수 : %d\n", a);
    printf("500원의 개수 : %d\n", b);
    printf("100원의 개수 : %d\n", c);
    printf("10원의 개수 : %d\n", d);
    return 0;
}