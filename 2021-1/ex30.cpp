#include <stdio.h>

struct good
{
    char name[10];
    int age;
};

int main() {
    struct good s[] = {{"Kim", 28}, {"Lee", 38}, {"Seo", 50}, {"Park", 35}};

    struct good *p;
    p = s;
    p++;

    printf("%s\n", p->name); // Lee
    printf("%d\n", p->age); // 38
}
