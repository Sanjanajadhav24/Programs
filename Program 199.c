#include <stdio.h>
int main(){
    char s1[50], s2[50];
    scanf("%49s", s1); getchar(); // consume newline
    fgets(s2,50,stdin);
    printf("scanf: %s\nfgets: %s\n", s1, s2);
    return 0;
}
