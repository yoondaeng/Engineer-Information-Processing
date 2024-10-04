#include <stdio.h>
// 외워서 푸는 문제
int isPrime(int number) {
    int i;
    for(i=2; i<number; i++) {
        if (number % i == 0) return 0; // 소수판별법
    }
    return 1;
}

// 소인수분해 문제
int main(void) {
    int number = 13195, max_div = 0, i;
    for (i=2; i<number; i++)
        if (isPrime(i) == 1 && number % i == 0) // 약수를 구함
            max_div = i;
    printf("%d", max_div); // 13195를 29로 나누었을 때 딱 나누어 떨어짐 소수이면서 최대 약수값을 구함
    return 0;
}