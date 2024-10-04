#include <stdio.h>
int main() {
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int row = 1;
    for(int i = 2; i>=0; i--) {
        printf("%d ", matrix[row][i]);
    }

    return 0;
}