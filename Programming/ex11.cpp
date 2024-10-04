#include <stdio.h>
int main() {
    int i = 0, j = 0, sum = 0;
    printf("값을 입략하시오. \n"); 
    scanf("%d", &j);
    printf(" \n입력한 값은 %d입니다.\n ", j);
    while(j>=i) {
        sum = sum + i;
        i = i + 2;
    }
    printf("0부터 %d까지 짝수의 합은 %d입니다.\n",j,sum);
    
    // 0부터 5까지 짝수의 합은 6입니다.
}