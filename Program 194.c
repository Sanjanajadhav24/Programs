#include <stdio.h>
int main(){
    int n,m; scanf("%d%d",&n,&m);
    int a[n], b[m]; for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int j=0;j<m;j++) scanf("%d",&b[j]);
    int i=0,j=0;
    while(i<n && j<m) printf("%d ", (a[i]<=b[j])?a[i++]:b[j++]);
    while(i<n) printf("%d ", a[i++]); while(j<m) printf("%d ", b[j++]);
    printf("\n"); return 0;
}
