#include <stdio.h>

int main() {
    char a[] = "Art";
    char* p = NULL;
    p = a;
    printf("%s\n", a); // Art
    printf("%c\n", *p); // A
    printf("%c\n", *a); // A
    printf("%s\n", p); // Art
    for (int i = 0; a[i] != '\0'; i++) printf("%c", a[i]); // Art
}