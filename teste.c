#include <stdio.h>
#include <string.h>

int main() {
    char frase[100]; // ou o tamanho adequado para a sua frase
    fgets(frase, sizeof(frase), stdin); // lê a frase do usuário
    frase[strcspn(frase, "\n")] = '\0'; // remove o caractere '\n' substituindo-o por '\0'

    // Agora você pode trabalhar com a frase completa, incluindo espaços.
    printf("Frase completa: %s\n", frase);

    return 0;
}
