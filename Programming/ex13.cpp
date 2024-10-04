#include <stdio.h>
int main() {
    int a[3][2] = {{1,2}, {3,4}, {5,6}};
    printf("%d\n", **a); // 1
    printf("%d\n", **(a+1)); // 3
    printf("%d\n", **(a+2)); // 5
}