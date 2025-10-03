#include <stdio.h>
int main() {
    FILE *f;
    f = fopen("output.txt", "w");
    if(f == NULL) { printf("Error!"); return 1; }
    fprintf(f, "Hello, File Handling in C!");
    fclose(f);
    return 0;
}
