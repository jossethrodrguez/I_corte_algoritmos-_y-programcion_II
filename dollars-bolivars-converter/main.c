#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tasaDeCambio = 5.85, operacion;
    int eleccion, cantidad;

    printf("escribe '0' para convertir de dolares a bolivares \nescribe '1' para convertir de bolivares a dolares\n:  ");
    scanf("%d", &eleccion);

    if (eleccion = 1){
        printf("Cuantos Dolares quieres convertir a Bolivars ? : ");
        scanf("%d", &cantidad);

        operacion = cantidad * tasaDeCambio;
        printf("%d son %f\n", cantidad, operacion);
    }
}
