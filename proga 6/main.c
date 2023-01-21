#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    char arr1[4] = {'a', 'b', 'c', 'd'};
    char *p1 = arr1;
    printf ("Array for task 1\n");
    for (i = 0; i < 4; i++) {
        printf("%c  ", *p1 + i);
    }
    printf("\n\n");
    char *arr2 = (char*)malloc(4*sizeof(char));
    char *p2 = arr2;
    *(p2) = 'a';
    *(p2+1) = 'b';
    *(p2+2) = 'c';
    *(p2+3) = 'd';
    printf ("Array for task 2\n");
    for (i = 0; i <4; i++) {
        printf("%c  ", *p2 + i);
    }
    free (arr2);

    return 0;
}
