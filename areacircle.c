#include<stdio.h>
int areacircle(int r) {
    return 3.14 * r * r;
}
int main() {
    int i,area;
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
 area = areacircle(r);
    printf("Area of the circle is: %d", area);
    return 0;
}