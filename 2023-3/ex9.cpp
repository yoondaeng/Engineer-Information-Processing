#include <stdio.h>

int isPefectNum(int num) { // 완전수: 자신을 제외한 모든 약수의 합이 자기 자신과 같은 수
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    if (num == sum) return 1;
    else return 0;
}

int main() {
    int r = 0;
    for (int i = 1; i<=100; i++)
        if (isPefectNum(i)) r += i; // 완전수의 합을 구함 6 + 28
    printf("%d", r);
}