#include <stdio.h>
int main() {
    float a = 7.9;

    printf("%f\n", a); // %f: 실수 소수점 6자리까지 출력 7.900000
    printf("%.3f\n", a); // 7.900
    printf("%6.2f\n", a); // %[전체자리수].[소수점자리수]f   7.90
    // 전체 자리수를 6자리로하고 소수점 2자리까지 출력하므로 앞 공백을 2자리 띄어줌

    /* 출력결과
    7.900000
    7.900
      7.90
    */

    return 0;
}