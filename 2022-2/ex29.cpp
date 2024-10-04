#include <stdio.h>

struct A
{
    int n;
    int g;
};

int main() {
    struct A a[2];
    for(int i = 0; i < 2; i++) {
        a[i].n = i; // 0 1
        a[i].g = i+1; // 1 2
    }
    printf("%d", a[0].n + a[1].g); // 0 + 2 = 2
    
}
