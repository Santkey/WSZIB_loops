ZADANIE 2 Napisz program w języku ANSI C, który wczytuje dowolne znaki z klawiatury aż do
momentu naciśnięcia znaku '*'. Wtedy program powinien zapytać użytkownika czy chce
przerwać wczytywanie. Po naciśnięciu znaku 't' lub 'T' wczytywanie ma być przerwane,
natomiast po naciśnięciu innego klawisza wczytywanie powinno być kontynuowane.

#include <stdio.h>

int main() {

    do {
        char inputChar = 0;
        printf("Podaj znak:");
        fflush(stdin);
        scanf("%c", &inputChar);

        if (inputChar == '*') {
            char exitPrompt = 0;
            printf("Czy chcesz przerwac wczytywanie? (T/n)");
            fflush(stdin);
            scanf("%c", &exitPrompt);

            if (exitPrompt == 't' || exitPrompt == 'T') {
                break;
            } else {
                continue;
            }
        }

        printf("\nWczytano: %c\n", inputChar);

    } while(1);

    return 0;
}