ZADANIE 4 Napisz program w języku ANSI C, który wczytuje dowolne liczby całkowite i wypisuje
na monitorze sumę wprowadzonych liczb nieparzystych. Program kończy działanie, gdy
obliczona suma będzie podzielna przez 100.

#include <stdio.h>

int main() {

    int sum = 0;
    do {

        int currentNumber = 0;
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &currentNumber);

        if (currentNumber % 2 != 0) {
            sum += currentNumber;
        }

        printf("Suma: %d\n", sum);
    } while(sum % 100 != 0);

    return 0;
}