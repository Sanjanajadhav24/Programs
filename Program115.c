#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i, v = 0;
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
    }
    printf("Vowels = %d", v);
    return 0;
}
