#include <search.h>
#include <stdio.h>
void main()
{
    char chain[100];
    char letter;
    printf("Ingrese una letra: \n");
    scanf("%c",&letter);
    printf("Ingrese una cadena: \n");
    scanf("%s",&chain);
    printf("las letras seleccionadas son %c \n", letter);
    int number = contarCaracter(chain, letter);
    printf("Este es el numero de veces que aparece la letra: %d", number);
}
