#include <stdio.h>
int main() {
    int num = 1234;
    int div = 10;
    int res = 0;
    while (num > 0)
    {
       res = res * div; // 0 1230
       res = res + num % div; // 0 + 1234 / 10 = 123 1230 + 12 = 1242
       num = num / div; // 1234 / 10 = 123 1242 / 10 = 124
    }
    printf("%d", res); // 4321로 출력되게
}