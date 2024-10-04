#include <stdio.h>

int main() {
    char *p = "KOREA";
    printf("%s \n", p); // KOREA
    printf("%s \n", p+3); // EA
    printf("%c \n", *p); // K
    printf("%c \n", *(p+3)); // E
    printf("%c ", *p+2); // p가 가리키는 문자 K에 아스키 +2 값 KLMNOP
    // M
    // A의 아스키코드 65
}