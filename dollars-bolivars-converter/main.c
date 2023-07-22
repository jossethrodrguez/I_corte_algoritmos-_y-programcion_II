#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tasaDeCambio = 5.85, operacion;
    int eleccion, cantidad;
\
    printf("Conversor de Dolar a Bolivares (tasa de cambio a 5.85Bs por Dolar)\n");
    printf("escribe '0' para convertir de dolares a bolivares \nescribe '1' para convertir de bolivares a dolares\n:  ");
    scanf("%d", &eleccion);


    if(eleccion == 0){
        printf("Cuantos Dolares quieres convertir a Bolivars ? : ");
        scanf("%d", &cantidad);

        operacion = cantidad * tasaDeCambio;
        printf("%d son %f\n", cantidad, operacion);
    }
    else if(eleccion == 1){
        printf("Cuantos Bolivares quieres convertir a Dolares ? : ");
        scanf("%d", &cantidad);

        operacion = cantidad / tasaDeCambio;
        printf("%d son %f\n", cantidad, operacion);
    }
    else{
        printf("Por favor Ingresa un caracter Valido");
    }
}
