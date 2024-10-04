#include <stdio.h>

int main() {
    int  ary[3];
    int s = 0;
    *(ary+0) = 1;
    ary[1] = *(ary + 0) + 2; // 3
    ary[2] = *ary + 3; // 4
    for(int i = 0; i < 3; i++) {
        s = s + ary[i]; // 1 + 3 + 4
    }

    printf("%d", s); // 8
}