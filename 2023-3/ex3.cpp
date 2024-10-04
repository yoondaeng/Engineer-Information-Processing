#include <stdio.h>
int main() {
    char* p = "KOREA";
    printf("1. %s\n", p); // 1. KOREA %s 문자열 \0널 문자 전까지 출력
    printf("2. %s\n", p + 1); // 2. OREA
    printf("3. %c\n", *p); // 3. K p포인터 변수가 가리키고 있는 곳
    printf("4. %c\n", *(p + 3)); // 4. E
    printf("5. %c\n", *p + 4); // 5. O p번지가 가리키고 있는 곳에 +4를 더해줘라 K L M N O P Q R
}