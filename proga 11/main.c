#include <stdio.h>
#include "rectangle.h"

int main() {

    struct rectangle rectangle_s;
    printf ("Enter the coordinates considering that point A placed between B and C.\n");
    printf ("Enter the coordinates of the point A:");
    scanf("%d %d", &rectangle_s.x1, &rectangle_s.y1);
    printf ("Enter the coordinates of the point B:");
    scanf("%d %d", &rectangle_s.x2, &rectangle_s.y2);
    printf ("Enter the coordinates of the point C:");
    scanf("%d %d", &rectangle_s.x3, &rectangle_s.y3);
    printf("\n");

    printf("Perimeter of the entered rectangle: %.2f\n", perimeter(rectangle_s));
    printf("Space of the entered rectangle: %.2f", space(rectangle_s));
    return 0;
}
