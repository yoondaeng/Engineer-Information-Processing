#include <stdio.h>

struct insa {
    char name[10];
    int age;
    struct insa* impl_a;
    struct insa* impl_b;
};

int main() {
    struct insa p1 = {"Kim", 28, NULL, NULL};
    struct insa p2 = {"Lee", 36, NULL, NULL};
    struct insa p3 = {"Park", 41, NULL, NULL};
    p1.impl_a = &p2;
    p2.impl_b = &p3;
    printf("%s\n", p1.impl_a->name); // Lee
    printf("%d", p2.impl_b->age); // 41
}
