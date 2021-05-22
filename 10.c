ZADANIE 10 Napisz program w języku ANSI C, który na zmianę wczytuje i wypisuje liczby
zmiennoprzecinkowe i znaki, dopóki iloczyn wczytanych liczb zmiennoprzecinkowych
nie przekroczy 350.

#include <stdio.h>

int main() {
    float sum = 0;

    do {
        float currNumber = 0;
        printf("Wczytaj liczbe:");
        scanf("%f", &currNumber);

        char currChar;
        printf("Wczytaj znak:");
        fflush(stdin);
        scanf("%c", &currChar);

        if (sum == 0) {
            sum = currNumber;
        } else {
            sum *= currNumber;
        }

        printf("Liczba: %f | Znak: %d | Suma: %f\n", currNumber, currChar, sum);
    } while (sum <= 350);

    return 0;
}