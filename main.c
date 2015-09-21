#include "read.h"

int main(){
    int mi_Entero = 0;
    float mi_floatante = 0;

    //PRUEBA 1
    printf("Prueba de lectura de enteros : \n");
    //Llamada a la funcion de la libreria read.h
    readInt(&mi_Entero);//envio de puntero de la variable.
    printf("La lectura fue : [%d] :\n", mi_Entero);

    //PRUEBA 2
    printf("Prueba de lectura de flotantes : \n");
    //Lammada a funcion readFloat desde libreria
    readFloat(&mi_floatante);//Envio de posicion de memoria.
    printf("La lectura fue : [%f] :\n", mi_floatante);//test impresion

}
