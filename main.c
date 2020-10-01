#include <stdio.h>

int main() {
    char a;

    int b;
    double c;
    char d[256];

    char e = 'X';
    char *f = "Opis programu";

    printf("Enter a Character : ");
    scanf("%c", &a);

    printf("Enter an Integer Number : ");
    scanf(" %i", &b);

    printf("Enter a Decimal Number : ");
    scanf(" %lf", &c);

    printf("Enter a String ", d);
    scanf("%s", d);

    printf("Character to %c, Integer Number to %i, Decimal Number to %lf, String to %s \n", a, b, c, d);

    printf("Option Selected %c : %31s", e, f);

    return 0;
}
