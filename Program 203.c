#include <stdio.h>
struct P{ int x,y; };
int main(){
    int n; scanf("%d",&n); struct P a[n];
    for(int i=0;i<n;i++) scanf("%d%d",&a[i].x,&a[i].y);
    for(int i=0;i<n;i++) printf("%d %d\n", a[i].x, a[i].y);
    return 0;
}
