ZADANIE 1 Napisz program w języku ANSI C, który wczytuje dowolne liczby całkowite i wypisuje
na monitorze najmniejszą z tych liczb. Program kończy działanie, gdy wprowadzimy 0 (0
jest traktowane wyłącznie jako warunek końca, a nie jako jedna z wprowadzanych liczb).

#include <stdio.h>

int main() {
    int minimumNumber = 0;

    do {
        int currentNumber = 0;
        printf("Podaj liczbe calkowita (0 aby zakonczyc):");
        scanf("%d", &currentNumber);

        if (currentNumber == 0) {
            break;
        }
        else if (currentNumber < minimumNumber || minimumNumber == 0) {
            minimumNumber = currentNumber;
        }

        printf("Najmniejsza z podanych liczb: %d", minimumNumber);
        printf("\n==================================\n");

    } while(1);
}