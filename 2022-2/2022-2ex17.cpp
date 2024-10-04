#include <stdio.h>
int main() {
    int a[4] = {0, 2, 4, 8};
    int b[3];
    int *p;
    int sum = 0;
    for(int i = 1; i<4; i++) {
        p = a+i; // 1 4 7 12
        b[i-1] = *p-a[i-1]; // 1 2 3
        sum += b[i-1] + a[i];  // 
    }
    printf("%d", sum);
    return 0;
}