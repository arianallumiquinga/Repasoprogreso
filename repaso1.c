/*Calcular el area de las figuras*/
#include <stdio.h>
#include "funciones.h"
int main (){
    int opc,opc2;
    float base=0,altura=0, area=0,lado=0;
    printf("\n");

    do{
        printf("\n");
        opc=menu();
        switch (opc){
            case 1:
                printf("\n");
                printf("----------Area de un Triangulo ----------:\n");
                printf("Ingrese la base y la altura\n");
                base=ValidarFloatRango(base,0,1000);
                altura=ValidarFloatRango(altura,0,1000);

                area= AreaTriangulo(base,altura);
                printf("El area del triangulo es: %.2f",area);
                break;
            case 2:
                printf("\n");
                printf("----------Area de un Cuadrado ----------:\n");
                printf("Ingrese el lado\n");
                lado=ValidarFloatRango(lado,0,1000);
                area=AreaCuadrado(lado);
                printf("El area del triangulo es: %.2f",area);
                break;
            case 3:
                printf("Saliendo del progrma....");
                return 0;
        }
        printf("\nDesea continuar Si.1/No.2: ");
        opc2=ValidarEnteroRango(opc2,0,3);
    }while(opc2 != 2);


    return 0;

}