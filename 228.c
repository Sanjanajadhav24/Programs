#include <stdio.h>
float avgDist(float d[], int n) {
    float sum=0;
    for(int i=0; i<n; i++) sum+=d[i];
    return sum/n;
}
int main() {
    float dist[5];
    printf("Enter 5 distance readings (cm): ");
    for(int i=0; i<5; i++) scanf("%f",&dist[i]);
    printf("Average Distance = %.2f cm", avgDist(dist,5));
    return 0;
}
