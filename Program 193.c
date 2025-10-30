#include <stdio.h>
int main(){ unsigned int x; scanf("%u",&x); int c=0; while(x){ c += x&1; x >>=1; } printf("%d\n", c); return 0; }
