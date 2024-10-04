#include <stdio.h>

typedef struct
{
    int accNum;
    double bal;
}BankAcc;

double sim_pow(double base, int year){ // sim_pow((1+0.1), 3
    int i;
    double r = 1.0;

    for(i=0; i<year; i++) {
        r = r*base;
    }
    // double r = 1.0;
    // r = 1.0 * 1.1; // 1.1
    // r = 1.1 * 1.1; // 1.21
    // r = 1.21 * 1.1; // 1.331
    return r;
}

void initAcc(BankAcc *acc, int x, double y) {
    acc -> accNum = x;
    acc -> bal = y;
}

void xxx(BankAcc *acc, double *en) {
    if (*en > 0 && *en < acc -> bal) { // if문 실행
        acc -> bal = acc -> bal-*en; // bal - en 2200.0  - 100.0 = 2100.0
    } else {
        acc -> bal = acc -> bal+*en; // bal + en
    }
}

void yyy(BankAcc *acc) {
    acc -> bal = acc -> bal * sim_pow((1+0.1), 3); // 2100.0 * 1.331 = 2795.1 
}

int main() {
    BankAcc myAcc; // myAcc라는 은행 계좌를 선언하고 초기화 (accNum = 9981, bal = 2200.0)
    initAcc(&myAcc, 9981, 2200.0); 
    double amount = 100.0; // amount는 100.0으로 설정
    xxx(&myAcc, &amount); // xxx 함수를 호출하여 계좌 잔액에서 amount만큼을 차감
    yyy(&myAcc); // yyy 함수를 호출하여 10% 이자를 3년간 복리로 적용
    printf("%d and %.2f", myAcc.accNum, myAcc.bal); // 9981 and 2795.10
    // .2f 소수점 아래 두자리
    return 0;
}