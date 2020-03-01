#include <media.h>
#include <stdio.h>

void main(){
    float array[11] = {52,15,45,87,96,95,21,24,47,23,22};
    shellsort(array, 11);
    float result = media(array, 11);
    printf("asda %f \n",result);
}