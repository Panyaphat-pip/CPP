#include <iostream>
int base , high  ;
float sum;
int main() {
    printf("Enter Base");
    scanf("%d", &base);
    printf("Enter High ");
    scanf("%d", &high);
    sum = 0.5*base*high;
    printf("Base= %d \n High = %d \n The result of triangle area is %f",base,high, sum);


}
