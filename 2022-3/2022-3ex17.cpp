#include <stdio.h>

// 외워서 푸는 문제
// 완전수 문제: 30까지 완전수는 2개뿐
// 완전수? 6이면 1, 2, 3 약수를 더하면 = 6이 나옴 이를 완전수라고 함
int main() {
    int x, y;
    int cnt = 0;
    for(int i = 6; i<=30; i++) {
        x = 0;
        y = i / 2; // 나누기 -> 완전수
        for(int j = 1; j <= y; j++) {
            if(i % j == 0) x = x+j; // 약수를 구해서 더함
        }
        if(x==i) {
            cnt++;
        }
    }
    printf("%d", cnt); // 2
    return 0;
}