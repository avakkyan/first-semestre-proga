#include <stdio.h>
#include <math.h>
int main() {
    float a, radian, z1, z2;
    printf("Enter the number\n");
    scanf("%f", &a);
    radian = (a * (M_PI) / 180);
    z1 = 2 * (pow(sin(3 * M_PI - 2 * radian), 2)) * (pow(cos(5 * M_PI + 2 * radian), 2));
    z2 = 1/4.0 - 1/4.0*(sin(5/2.0*M_PI - 8 * radian));
    printf("z1= %f \nz2= %f", z1, z2);
    return 0;
}
