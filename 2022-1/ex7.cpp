#include <stdio.h>

int isPrime(int number) { // 소수판별
    int i;
    for (i=2; i<number; i++) { //
        if (number % i == 0) return 0; // 0이면 약수가 존재 소수 X
    }
    return 1;
}

int main(void) {
    int number = 13195, max_div=0, i; // max_div: 가장 큰 소수 약수를 저장할 변수
    for (i=2; i<number; i++)
        if (isPrime(i) == 1 && number % i == 0) max_div = i; // number가 소수이면서 i의 약수인지 확인
    printf("%d", max_div);
    return 0;
}