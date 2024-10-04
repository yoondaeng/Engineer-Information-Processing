#include <stdio.h>

int main() {
    int n, k, s, el = 0;

    for(n=6; n<=30; n++) {
        s=0;
        k=n/2;
        for(int j=1; j<=k; j++) {
            if(n%j==0) s=s+j;
        }

        if(s==n) el++; // 6~30까지 완전수가 몇 개인지? 6 28
    }

    printf("%d", el); // 2
}