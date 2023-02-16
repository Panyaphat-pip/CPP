#include <iostream>
int wide , length, high ;
float sum ;
int main() {
    printf("Enter wide ");
    scanf("%d", &wide);
    printf("Enter length");
    scanf("%d", &length);
    printf("Enter high");
    scanf("%d", &high);
    sum = wide*length*high;
    printf("Wide = %d \nLength = %d \nHigh = %d\nThe result of Rectangle is %f ", wide, length, high, sum);



}
