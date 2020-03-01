#include <stdio.h>
#include <stdlib.h>
#include <substring.h>

void main()
{
    char *p1 = "Hola que tal";
    char *p2;
    p2 = obtenerSubcadena(p1, 2);
    printf("%s\n",p1);  
    printf("%s\n",p2);     
}
