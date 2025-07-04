#include <stdio.h>
int main(){
    //printf("Hola mundo!");
    int num = 10;
    int *p;
    p = &num;
    printf("Contenido del puntero: %p",p);
    printf("\nDireccion de memoria almacenada por el puntero: %p",p);
    printf("\nDireccion de memoria de la variable: %p",&num);
    printf("\nDireccion de memoria del puntero: %p",&p);
    printf("\nTamaño de memoria de la variable usando sizeof: %zu bytes",sizeof(num));
    return 0;
}