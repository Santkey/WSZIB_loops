ZADANIE 6 Napisz program w języku ANSI C, który wczytuje z klawiatury liczby całkowite (i
wypisuje na monitorze)aż do momentu natrafienia na liczbę podzielną przez 11 lub 13.

#include <stdio.h>

int main() {
    int currentNumber = 0;
    do {
        printf("Podaj liczbe calkowita:");
        scanf("%d", &currentNumber);

        printf("Wczytano: %d\n", currentNumber);
    } while(currentNumber % 11 != 0 && currentNumber % 13 != 0);

    return 0;
}