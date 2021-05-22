ZADANIE 9 Napisz program w języku ANSI C, który wczytuje po dwie dowolne liczby całkowite,
porównuje je i wypisuje większą. Wczytywanie kończy się, gdy wprowadzimy w
kolejnej dwójce dwie jednakowe liczby.

#include <stdio.h>

int main() {
    int firstNumber = 0, secondNumber = 0;

    do {
        printf("Podaj pierwsza liczbe:");
        scanf("%d", &firstNumber);

        printf("Podaj druga liczbe:");
        scanf("%d", &secondNumber);

        printf("Wieksza: %d\n",
               firstNumber > secondNumber
                    ? firstNumber
                    : secondNumber
               );

    } while(firstNumber != secondNumber);

    return 0;
}
