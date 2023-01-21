#include <stdio.h>
#include <string.h>


int main() {
    //Task 1
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    strcat(str1, str2);
    printf("Task 1: After summation of two strings: %s\n", str1);

    //Task 3
    char str3[101];
    scanf("%s", str3);
    if (strcmp (str1, str3) == 0){
        printf("Task 3: strings 1 and 3 are identical\n");
    }
    else {
        printf("Task 3: strings 1 and 3 are different\n");
    }

    //Task 5
    char str4[101];
    scanf("%s", str4);
    strcpy(str3, str4);
    printf("Task 5: After coping the fourth string into the third: %s\n ",str3);

    //Task 7
    printf ("Task 7: The length of the first string: %d\n", strlen(str1));

    //Task 9
    char ch = 'a';
    char *ach = strrchr(str1, ch);
    if (ach == NULL){
        printf("Task 9: There is no such element in first string");
    }
    else {
        printf("Task 9: The last occurrence is : %d", ach - str1 +1);
    }
    return 0;
}
