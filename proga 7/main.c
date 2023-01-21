#include <stdio.h>
struct square{
    float xA;
    float yA;
    float xB;
    float yB;
};

int main() {
    enum Months{January, February, March, April, May, June, July, August, September, October, November, December};
    printf("Number of July: %d\n\n", July);

    struct square A = {2, 4, 2, 4};
    printf("Perimeter of square: %d\n", (A.xA-A.yA)*4);
    printf("Square area: %d\n",(A.xA-A.yA)*(A.xA-A.yA) );

    struct keyboard{
        unsigned NumLock: 1;
        unsigned CapsLock: 1;
        unsigned StrollLock: 1;
    };

    union work_of_keyboard{
        unsigned x;
        struct keyboard Keyboard;
    };

    union work_of_keyboard state;
    printf("Enter the number:\n");
    scanf("%x",&state.x);
    printf("NumLock:  %d\n", state.Keyboard.NumLock);
    printf("CapsLock:  %d\n", state.Keyboard.CapsLock);
    printf("StrollLock:  %d\n", state.Keyboard.StrollLock);

    return 0;
}
