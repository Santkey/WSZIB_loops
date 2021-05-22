ZADANIE 5 Napisz program w języku ANSI C, który wczytuje liczby zmiennoprzecinkowe z
klawiatury, sprawdza, czy są większe od zera (pozostałe pomija) i wypisuje je na
monitorze do momentu, dopóki ich iloczyn nie przekroczy 500.

#include <stdio.h>

int main() {

    float product = 0;
    do {
        float currentNumber = 0;
        printf("Wprowadz liczbe zmiennoprzecinkowa dodatnia:");
        scanf("%f", &currentNumber);

        if (currentNumber <= 0) {
            printf("Liczba niedodatnia, pomijam...\n");
            continue;
        }

        if (product == 0) {
            product = currentNumber;
        } else {
            product *= currentNumber;
        }

        printf("Wczytano: %f (Iloczyn: %f)\n", currentNumber, product);
    } while (product <= 500);

    return 0;
}