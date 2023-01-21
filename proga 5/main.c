#include <stdio.h>

int main() {
    int i, j, l;
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("The array for the task 1:\n");
    for (i = 0; i < 7; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
   int matr1 [2][2] = {{1,2},
                       {3,4}};
   int matr2 [2][2] = {{1, 0},
                       {0, 1}};
   int matr3 [2][2] = {{0, 0},
                       {0, 0}};
   for (i=0;i<2;i++) {
        for (j=0;j<2;j++){
            for (l=0;l<2;l++){
                matr3[i][j] += matr1[i][l] * matr2[l][j];
            }
        }
    }
   printf("Result for the task 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
