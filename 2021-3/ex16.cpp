#include <stdio.h>
int main() {
    int* array[3];
    int a = 12, b = 24, c = 36;
    array[0] = &a; // 12
    array[1] = &b; // 24
    array[2] = &c; // 36
    printf("%d", *array[1] + **array + 1); // 24 + 12 + 1 = 37
    // **array: 배열의 이름만 지정하면 배열의 첫번째 요소의 주소인 array[0]의 주소를 의미
    // *array = array[0]의 주소가 가르키는 곳 = a의 주소
    // **array = a의 주소가 가르키는 곳의 값은 12
}