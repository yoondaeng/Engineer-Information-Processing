#include <stdio.h>
int main() {
    int i, sum = 0;
    for ( i = 1; i <= 10; i+=2) {
        if (i % 2 && i % 3) continue; 
        // C언어에서 && (논리적 AND) 연산자는 두 연산자가 모두 참일 때만 참을 결과로 반환합니다. 하지만 C언어에서는 0을 거짓으로, 0이 아닌 모든 값(양수나 음수)을 참으로 간주
        sum += i;
    }
    printf("%d", sum);
    return 0;
}