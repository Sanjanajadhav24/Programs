#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);
    return 0;
}
