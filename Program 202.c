#include <stdio.h>
int main(){
    char s[200]; fgets(s,200,stdin);
    int len=0; while(s[len] && s[len]!='\n') len++;
    printf("Len=%d\n", len); return 0;
}
