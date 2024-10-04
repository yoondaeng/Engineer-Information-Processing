#include <stdio.h>

int main() {
    int arr[] = {34, 8, 50, 11, 18};
    int i,j,key;
    for(i=1; i<5; i++) {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    for(i=0; i<5; i++) printf("%d ", arr[i]); // 8 11 18 34 50

}