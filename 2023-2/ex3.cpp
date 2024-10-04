#include <stdio.h>

char n[30]; // 전역변수
char* getname() {
    printf("이름 입력 : ");
    gets(n); //  gets 함수가 호출될 때마다 n의 값이 최신 입력값으로 덮어쓰여짐
    return n;
}

int main() {
    char* n1 = getname();
    char* n2 = getname();
    char* n3 = getname();
    printf("%s\n", n1); // 박영희
    printf("%s\n", n2); // 박영희
    printf("%s\n", n3); // 박영희
}