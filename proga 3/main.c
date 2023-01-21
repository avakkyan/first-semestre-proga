#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter the number");
    scanf("%o",&num1);
    printf("The number in decimal system: %d\n",num1);
    printf("the number in octal system with shift by 1 bit: %o\n",num1 << 1);
    printf("After negation operation: %o\n", ~num1 );
    printf("The other octal number:");
    scanf("%o",&num2);
    printf("The second number in octal system: %o", num2);
    printf("%o", num1 & num2);

    return 0;
}