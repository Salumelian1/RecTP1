#include <stdio.h>

int main(){
    printf("Hola mundo");
    int *puntero, a = 10;
    puntero = &a;
    printf("\nContenido del puntero %d", *puntero);
    printf("\nDireccion de memoria almacenada por el puntero: %p",puntero);
    printf("\nDireccion de memoria de la variable: %p",&a);
    printf("\nDireccion de memoria del puntero: %p",&puntero); 
    printf("\nEl tamaño de 'a' es de: %d bits",sizeof(a));  
    return 0;
}