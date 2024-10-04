#include <stdio.h>
#include <ctype.h>

int main() {
    char*p = "It is 8";
    char result[100];
    int i;

    for(i=0; p[i]!='\0'; i++) { // 0~25 ABCDE FGHIJ KLMNO PQRST UVWXY Z
        if(isupper(p[i])) // 대문자
            result[i] = (p[i]-'A'+5)%25 + 'A'; // I: 8 + 5 = 13%25=13 N
        else if(islower(p[i])) // 소문자
            result[i] = (p[i]-'a'+10)%26 + 'a'; 
            // t: 19 + 10 = 29%26=3 d 
            // i: 8 + 10 = 18%26=18 s 
            // s: 18 + 10 = 28%26=2 c
        else if(!(isupper(p[i]) || islower(p[i]) || isdigit(p[i]))) 
        // 대문자 또는 소문자, 숫자가 아닌 경우
            result[i] = p[i]; // 그대로둠
    }

    result[i] = '\0';
    printf("%s\n", result); // Nd sc

    return 0;
}