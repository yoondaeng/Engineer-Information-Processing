#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int len = strlen(str);
    char reversed[6];
    for (int i = 0; i<len; i++) {
        reversed[i] = str[len-1-i];
    }
    reversed[len] = '\0';
    printf("%s", reversed); // 출력: olleh
    return 0;
}