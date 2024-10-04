#include<stdio.h>
int main(){
    int i = 3;
    int j = 4;
    if((++i > j--) && (i++ < --j)) i = i-- + ++j;
    else j = i-- - --j; // 4 - 2
    printf("%d %d\n", i, j);
}