#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, count_num = 0, count_low = 0, count_up = 0;

    char str[101];
    scanf("%s", &str);

    //Task 1
    for (i=0; i<strlen(str); i++){
        if (isdigit(str[i])){
            count_num++;
        }
        else if (isupper(str[i])){
            count_up++;
        }
        else if (islower(str[i])){
            count_low++;
        }
    }
    printf("The number of digits in string: %d\n", count_num);
    printf("The number of capital letters: %d\n", count_up);
    printf("The number of lowercase letters: %d\n", count_low);


    //Task 2
    int num_of_minutes, price, over_price, payment;
    printf("Enter the cost of 499 minutes:\n");
    scanf("%d", &price);
    printf("Enter the number of minutes, that were spent:\n");
    scanf("%d", &num_of_minutes);
    printf("Enter the cost of extra minute:\n");
    scanf("%d",&over_price);

    if (num_of_minutes > 499){
        payment = price + (num_of_minutes - 499) * over_price;
        printf("The monthly cost was: %d", payment);
    }
   else if (num_of_minutes <=499) {
        printf("The monthly cost was: %d", price);
    }

    return 0;
}
