#include <stdio.h>
struct  st
{
    int x, y;
};

int main() {
    struct st dt[2];
    for(int i = 0; i<2; i++) {
        dt[i].x = i;
        dt[i].y= i+1;
    }
    printf("%d",dt[0].x + dt[1].y); // 0 + 2
}