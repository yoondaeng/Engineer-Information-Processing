#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n-1; i>=0; i--) { // i가 0보다 크거나 같을때까지
        printf("%d ", arr[i]); // 출력 5 4 3 2 1
    }

    return 0;
}