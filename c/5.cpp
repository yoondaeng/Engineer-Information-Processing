#include<stdio.h>
int main(){
    char inputDate[50];
    scanf("%s", inputDate); // 입력 : Hello, World
    printf("%.4s", inputDate); // Hell 4글자만 출력
    printf("%3.2s", inputDate); // 전체 3자리를 확보한 후 inputDate에 저장된 문자열 2글자만 출력
    // 출력: Hell He
}