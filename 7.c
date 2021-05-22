ZADANIE 7 Napisz program w języku ANSI C, który wczytuje z klawiatury dowolne znaki aż do
momentu, gdy kolejno wprowadzone znaki będą gwiazdką i kropką.

#include <stdio.h>

int main() {
    char prevChar,
         currChar = 0;

    do {
        prevChar = currChar;

        printf("Podaj znak:");
        fflush(stdin);
        scanf("%c", &currChar);

    } while(prevChar != '*' || currChar != '.');

    return 0;
}