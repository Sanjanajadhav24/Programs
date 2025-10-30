#include <stdio.h>
float avgTemp(float t[], int n) {
    float sum=0;
    for(int i=0; i<n; i++) sum+=t[i];
    return sum/n;
}
int main() {
    float temp[5];
    printf("Enter 5 temperature readings: ");
    for(int i=0; i<5; i++) scanf("%f",&temp[i]);
    printf("Average Temperature = %.2f°C", avgTemp(temp,5));
    return 0;
}
