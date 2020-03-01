#include <stdio.h>

int contarCaracter(char *array, char ch){
    char *p = array;
    int exist = 0;
    while (*p != '\0'){
        if((char)*p == (char)ch){
            exist++;
        }
        *p++;
    }
    if(exist == 0){
        return -1;
    }
    return exist;
}

int obtenerIndice(char *array, char ch){
    if (contarCaracter(array, ch) == -1) {
        return -1;
    }else{
        char *p = array;
        int exist = 0;
        while (*p != '\0'){
            if((char)*p == (char)ch){
                return exist;
            }
            *p++;
            exist++;
        }
    }
}