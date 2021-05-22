ZADANIE 8 Napisz program w języku ANSI C, który wczytuje i wypisuje z klawiatury dowolne
znaki (pojedynczo) aż do momentu, gdy dwa kolejno wprowadzane znaki powtórzą się.

#include <stdio.h>

int main() {
    char prevChar,
         currChar = 0;

    do {
        prevChar = currChar;

        printf("Podaj znak:");
        fflush(stdin);
        scanf("%c", &currChar);

        printf("Wczytano: %c\n", currChar);

    } while(prevChar != currChar);

    return 0;
}
