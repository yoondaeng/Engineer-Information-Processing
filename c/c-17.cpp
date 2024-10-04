#include<stdio.h>
int main(){
    int x = 0x11;
    int y, z;
    y = x & 0x0f;
    z = x | 0x0f;
    printf("x=%d, y=%d, z=%d", x, y, z);
}