#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    circumference = 2*radius*PI;
    area = PI*radius*radius;
    printf("The circumference is: %.2lf\n", circumference);
    printf("The area is %.2lf", area);
    return 0;
}