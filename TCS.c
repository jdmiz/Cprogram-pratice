#include <stdio.h>

int main() {

    //  C program for Area of Triangle
    float base = 10, height = 6, area;
    area = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", area);

    //  C program for cm to meter conversion
    float cm = 250, meter;
    meter = cm / 100;
    printf("Meter = %.2f\n", meter);

    // C program for Simple Interest
    float P = 5000, R = 10, T = 2, SI;
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}