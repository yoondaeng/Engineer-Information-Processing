#include<stdio.h>
#define VALUE1 1
#define VALUE2 2

int main() {
    float i;
    int j, k, m;
    i = 100 / 300; // 정수 / 정수 = 정수 0
    j = VALUE1 & VALUE2; // 01 10 00 0
    k = VALUE1 | VALUE2; // 01 10 11 3
    if( j && k || i) m = i + j;
    else m = j + k; // 3
    printf("i = %.1f j = %d k = %d m = %03d \n", i, j, k, m); 
    // i = 0.0 j = 0 k = 3 m = 003 
}