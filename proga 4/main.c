#include <stdio.h>

int main() {
    int num1, num2, test;
    printf("Enter the number for test");
    scanf("%d",&num1);
    while(num1>=1 && num1<=10) {
        printf("true");
        break;
    }

    printf("Enter the number for second task");
    scanf("%x",&num2);
    printf("%d\n", num2 % 2);


    return 0;
}
