#include <stdio.h>
int cuadrado(int num);
void cuadradoV(int num,int *resultado);
void mostrar(int num);
void invertir(int *a,int *b);
void orden(int *a,int *b);
int main(){
    int num = 10;
    int a=2;
    int b=3;
    int resultado;
    printf("El cuadrado de num es: %d",cuadrado(num));
    cuadradoV(num,&resultado);
    printf("\nEl cuadrado de num con VOID es: %d",resultado);
    mostrar(num);
    printf("\na: %d",a);
    printf("\nb: %d",b);
    invertir(&a,&b);
    printf("\na: %d",a);
    printf("\nb: %d",b);
    orden(&a,&b);
    printf("\nEl numero mas chico es a: %d",a);
    printf("\nEl numero mas grande es b: %d",b);
    return 0;
}
int cuadrado(int num){
    return num * num;
}
void cuadradoV(int num, int *resultado){
    *resultado = num * num;
}

void mostrar(int num){
    printf("\nContenido: %d",num);
    printf("\nDireccion: %p",&num);
}

void invertir(int *a,int *b){
    int aux= *a;
    *a = *b;
    *b = aux;
}
void orden(int *a, int *b){
    if (*a > *b)
    {
        invertir(a,b);
    }   
}