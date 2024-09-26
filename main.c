#include <stdio.h>

int main(void) {
    int età;
    char nome;
    printf("inserisci età");
    scanf("%d", &età);
    printf("inserisci nome");
    scanf("%c", &nome);
    if (età >= 18) {
        printf(" %c è maggiorenne",nome);
    }

    return 0;
}
