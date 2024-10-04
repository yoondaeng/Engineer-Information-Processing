#include <stdio.h>

// for문 4개 나오는 문제: 손절 ㄱㄱ
int calculate(int w, int h, int j, int i) {
    if (i >= 0 && i < h && j >= 0 && j < w) return 1;
    return 0;
}

int main() {
    int field[4][4] = {{0,1,0,1},{0,0,0,1},{1,1,1,0},{0,1,1,1}};
    int mines[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    int w = 4, h = 4;
    for(int y=0; y<h; y++) {
        for(int x=0; x<w; x++) {
            if(field[y][x] == 0) continue;

        }
    }
}