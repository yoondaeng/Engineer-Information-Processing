#include <stdio.h>
void swap(int *it, int *gt) {
    int tmp;
    tmp = *it;
    *it = *gt;
    *gt = tmp;
}

int main() {
    int arr[] = {34, 8, 50, 11, 18};
    int i, j;
    for(i=0; i<5-1; i++) {
        for(j=0; j<5-i-1; j++) {
            if(arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);
        }
    }
    for(i=0; i<5; i++) printf("%d ", arr[i]);
}