//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#define PI 3.14159
int main() {

    float rad;
    scanf("%f",&rad);

    printf("Area = %f\n",PI*rad*rad);
    printf("Perimeter = %f\n",2*PI*rad);

    return 0;
}