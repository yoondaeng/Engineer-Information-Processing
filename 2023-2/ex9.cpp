#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

int isEmpty() {
    if (point == -1) return 1;
    return 0;
}

int isFull() {
    if (point == 10) return 1;
    return 0;
}

void into(int num) { // 값 넣기
    if (isFull() == 1) printf("Full");
    else isWhat[++point] = num;
}

int take() { // 출력
    if (isEmpty() == 1) printf("Empty");
    else return isWhat[point--];
    return 0;
}

int main() {
    into(5); into(2);
    while (!isEmpty()) { // 213465
        printf("%d", take()); // 2
        into(4); into(1); printf("%d", take()); // 1
        into(3); printf("%d", take()); printf("%d", take()); // 3 4
        into(6); printf("%d", take()); printf("%d", take()); // 6 5
    }
}