#include <stdio.h>

int main (){

    float basedelArea, altura, result;
    printf("Ingrese la base del rectangulo\n");
    scanf("%f", &basedelArea);
    printf("INgrese la altura del rectangulo\n");
    scanf("%f",&altura);

    result = basedelArea * altura;
    printf("El area del rentagulo es: %.f", result);
}