
#include <school.h>
#include <stdio.h>

void main(){
    /* 3 materias y 4 alumno*/
    float array[3][5];
    array[0][0] = 1.0;
    array[0][1] = 1.5;
    array[0][2] = 4.5;
    array[0][3] = 1.8;
    array[0][4] = 4.7;
    array[1][0] = 3.6;
    array[1][1] = 4.2;
    array[1][2] = 2.1;
    array[1][3] = 2.4;
    array[1][4] = 4.8;
    array[2][0] = 4.7; 
    array[2][1] = 2.3;
    array[2][2] = 2.2; 
    array[2][3] = 4.5;
    array[2][4] = 5;
    float arrayAlum1[3];
    float arrayAlum2[3];
    float arrayAlum3[3];
    float arrayAlum4[3];
    float arrayAlum5[3];
    //notas por persona
    for(int i =0; i<= 2; i++){
        arrayAlum1[i] = array[i][0];
        arrayAlum2[i] = array[i][1];
        arrayAlum3[i] = array[i][2];
        arrayAlum4[i] = array[i][3];
        arrayAlum5[i] = array[i][4];
    }
    shellsort(arrayAlum1, 3);
    shellsort(arrayAlum2, 3);
    shellsort(arrayAlum3, 3);
    shellsort(arrayAlum4, 3);
    shellsort(arrayAlum5, 3);
    float result = media(arrayAlum1, 3);
    printf("El resultado de la media del estudiante es %f \n",result);
    float arrayAsing1[5];
    float arrayAsing2[5];
    float arrayAsing3[5];

    //notas por asignatura
    for(int i =0; i<= 4; i++){
        arrayAsing1[i] = array[0][i];
        arrayAsing2[i] = array[1][i];
        arrayAsing3[i] = array[2][i];
    }
    float resultAsign = media(arrayAsing1, 5);
    printf("El resultado de la media de la asignatura es %f \n",resultAsign);
    float allAsing[3] = {media(arrayAsing1, 5), media(arrayAsing2, 5), media(arrayAsing3, 5)};
    float allResult = media(allAsing, 3);
    printf("El resultado de la media de toda la clase es %f \n",allResult);
    float allStundent[5] = {media(arrayAlum1, 3),media(arrayAlum2, 3),media(arrayAlum3, 3),media(arrayAlum4, 3),media(arrayAlum5, 3)};
    shellsort(allStundent, 5);    
    printf("La media de estudiantes ordenado decrecientemente : \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %f \n", allStundent[i]);
    }
    
}