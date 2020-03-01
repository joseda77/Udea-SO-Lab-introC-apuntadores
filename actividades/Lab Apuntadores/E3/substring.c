#include <string.h>
#include <stdlib.h>


char *obtenerSubcadena(char *array, int index){
    char *p = (char *) malloc(sizeof(char [100]));
    p = array+index+1;
    return p;
}