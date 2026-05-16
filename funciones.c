#include <stdio.h>
#include <math.h>
int ValidarEnteroRango(int d,int x, int y){
    int aux=0;
    aux= scanf("%d",&d);
    if ((aux!=1) || (d<x) || (d>y)) {

        printf("El numero ingresado es invalido");
    }
    return d;
}
float ValidarFloatRango(float d,float x, float y){
    float aux=0;
    aux= scanf("%f",&d);
    if ((aux!=1) || (d<x) || (d>y)) {

        printf("El numero ingresado es invalido");
    }
    return d;
}
int menu(){
    int opc=0;

    printf("--------------Bienvenido al programa de calcular Areas--------------\n\n");
    printf("Opciones de Areas:\n");
    printf("1. Triangulo\n");
    printf("2. Cuadrado\n");
    printf("3. Salir\n")
    printf("Seleccione una de las opciones:\n");
    printf(">> ");
    opc=ValidarEnteroRango(opc,0,3);
    return opc;
}

float AreaTriangulo (float a, float b){
    float c;
    c= (a*b)/2;
    return c;
}
float AreaCuadrado (float lado){
    float t;
    t= pow (lado,2);
    return t;
}