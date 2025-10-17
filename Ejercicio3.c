/*David Alejandro Martínez Vega L´Englisse
clase 2 ejercicio 3*/

#include <stdio.h>

int main() 
{
    int num1, num2, res;

    printf("Escriba el primer numero (dividendo): \n");
    scanf("%d", &num1);

    printf("Escriba el segundo numero (divisor): \n");
    scanf("%d", &num2);

    // El operador '%' calcula el resto de la division
    res = num1 % num2;

    if (res == 0) {
        printf("El numero %d es divisible entre %d.\n", num1, num2);
    } else {
        printf("El numero %d NO es divisible entre %d. El resto es %d.\n", num1, num2, res);
    }
    
    return 0;
}
