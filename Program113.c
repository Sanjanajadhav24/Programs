#include <stdio.h>
int main() {
    FILE *f;
    char c;
    f = fopen("output.txt", "r");
    if(f == NULL) { printf("Error!"); return 1; }
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
    return 0;
}
