#include <stdio.h>
int main() {
    FILE *f;
    char c;
    int count = 0;
    f = fopen("output.txt", "r");
    if(f == NULL) { printf("Error!"); return 1; }
    while((c = fgetc(f)) != EOF) count++;
    fclose(f);
    printf("Characters = %d", count);
    return 0;
}
