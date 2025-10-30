#include <stdio.h>
int main(){
    int c, inword=0, words=0;
    while((c=getchar())!=EOF){
        if(c==' '||c=='\n'||c=='\t') inword=0;
        else if(!inword){ inword=1; words++; }
    }
    printf("Words=%d\n", words); return 0;
}
