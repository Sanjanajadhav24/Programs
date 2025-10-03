#include <stdio.h>
int main() {
    int n, coef=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=0;k<=i;k++) {
            if(k==0||i==0) coef=1;
            else coef=coef*(i-k+1)/k;
            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}
