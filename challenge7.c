#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf(" %c", &caractere);

    // Vérification de la plage ASCII
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("%c est une lettre majuscule.\n", caractere);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}

