//meter to centimeter conversion with function
#include <stdio.h>
float meter_to_centimeter(float meter);
int main() {
    float meter;
    printf("Enter length in meters: ");
    scanf("%f", &meter);
    float centimeter = meter_to_centimeter(meter);
    printf("%.2f meters is equal to %.2f centimeters.\n", meter, centimeter);
    return 0;
}
float meter_to_centimeter(float meter){
      return meter * 100.0;
}