#include <stdio.h>

void toUpperCase(char *c_cara) {
    while (*c_cara != '\0') {
        if (*c_cara >= 'a' && *c_cara <= 'z') {
            *c_cara = *c_cara - 32;
        }
        c_cara++;
    }
}

int main() {

    char c_cara[100];

    printf("Entrez la chaine de caracteres : ");
    scanf("%99[^\n]", c_cara);

    toUpperCase(c_cara);

    printf("Resultat en Majuscules : %s\n", c_cara);

    return 0;
}
