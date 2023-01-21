#include <stdio.h>
#include <math.h>

int GreatestCommonDivisor(int num1, int num2){
    int result;
    while (num1>0 && num2>0){
        if (num1 == num2){
            result = num1;
        }
        else if (num1 > num2){
            num1 = num1 % num2;
        }
        else if (num1 < num2){
            num2 = num2 % num1;
        }
    result = num1 + num2;
    }
}
int LeastCommonMultiple (int num1, int num2){
    int result;
    result = num1 / GreatestCommonDivisor(num1, num2) * num2;
    return result;


}

struct point{
    int x, y;
};

float distances(const struct point A, const struct point B){
    return sqrt(pow(A.x - B.x,2) + pow (B.y - A.y,2));
}

int main() {
    int num1, num2, GCD, LCM;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    GCD = GreatestCommonDivisor(num1, num2);
    LCM = LeastCommonMultiple(num1, num2);
    printf("Task 1: GreatestCommonDivisor %d, LeastCommonMultiple %d \n\n", GCD, LCM);

    // Task 2
    struct point point[100];
    float arr[100][100];
    int n;
    printf("Enter the number of points:");
    scanf("%d", &n);
    printf ("Enter point coordinates:");
    for (int i=0; i<n; i++){
        scanf ("%d %d",&point[i].x, &point[i].y);

    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = distances(point[i], point[j]);
    printf("Task 2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i != j)
                printf("%.2f ", arr[i][j]);
        printf("\n");
    }
    printf("\n");



    return 0;
}
