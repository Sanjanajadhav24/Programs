#include <stdio.h>
#include <string.h>
int main(){
    char s[200]; fgets(s,200,stdin); int n=strcspn(s,"\n"); s[n]=0;
    for(int i=n-1;i>=0;i--) putchar(s[i]);
    putchar('\n'); return 0;
}
