#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    printf("Value: %d\n", *p);
    printf("Address: %p\n", p);
    return 0;
}
