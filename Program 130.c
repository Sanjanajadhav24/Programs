#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    if(strcmp(s1, s2)==0) printf("Strings are Equal");
    else printf("Strings are Not Equal");
    return 0;
}
