#include <stdio.h>

int main(){
    int result[5];
    int arr[] = {77, 32, 10, 99, 50};
    for(int i = 0; i < 5; i++) {
        result[i] = 1;
        for(int j = 0; j < 5; j++) { // arr[i]보다 크면 res 증가
            if(arr[i] < arr[j]) result[i]++; 
        }
    }
    for(int i = 0; i < 5; i++) printf("%d", result[i]); // 24513
}