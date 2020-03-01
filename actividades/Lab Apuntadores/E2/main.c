#include <index.h>
#include <stdio.h>
void main()
{
    char chain[100];
    char letter;
    printf("Ingrese una letra: \n");
    scanf("%c",&letter);
    printf("Ingrese una cadena: \n");
    scanf("%s",&chain);
    printf("las letras seleccionadas es %c \n", letter);
    int number = obtenerIndice(chain, letter);
    printf("El indice de la letra es: %d \n", number);
}
