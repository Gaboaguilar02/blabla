#include <stdio.h>
#include <math.h>
#include "funciones.h"
// 
int main() {
    // 
    float capitalRestante[7] = {10000.0, 8571.43, 7142.86, 5714.29, 4285.71, 2857.14, 1428.57};
    float tasaInteresAnual = 16.5; 
    int tiempo = 7; 
    // 
    printf("Año\tCuota Mensual\tInteres Anual\tCapital a Pagar\n");
    for (int i = 0; i < tiempo; i++) {
        float interesAnual = calcularInteresAnual(capitalRestante[i], tasaInteresAnual);
        float cuotaMensual = calcularPagoMensual(capitalRestante[i], tasaInteresAnual, tiempo - i);
        float capitalAPagar = cuotaMensual - interesAnual;
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i+1, cuotaMensual, interesAnual, capitalAPagar);
    }

    return 0;
}
