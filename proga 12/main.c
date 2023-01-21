#include <stdio.h>

int main(int argc, char *argv[]) {

    int day, month, year;
    FILE *file;
    file = fopen(argv[1], "w");
    scanf("%i.%i.%i", &day, &month, &year);

        for (int i = 0; i < 10; i++) {
            fprintf(file, "%02i.%02i.%i\n", day, month, year);
            day++;
            if (month == 2 && 28){
                day=1;
                month++;
            }
            else {
                if (month % 2 == 1 && day > 31){
                    day = 1;
                    month++;
                }
                if (month % 2 == 0 && day > 30) {
                    day = 1;
                    month++;
                }
            }
            if (month > 12){
                month = 1;
                year++;
            }
        }
    fclose(file);
    return 0;
}

