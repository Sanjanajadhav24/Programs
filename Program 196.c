#include <stdio.h>
int main(){
    int n,x; scanf("%d%d",&n,&x); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){ printf("Found at %d\n", m); return 0; }
        else if(a[m]<x) l=m+1; else r=m-1;
    }
    printf("Not found\n"); return 0;
}
