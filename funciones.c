#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularInteresAnual(float capitalRestante, float tasaInteresAnual);{
return capitalRestante * (tasaInteresAnual / 100);
}
float tasaInteresMensual = tasaInteresAnual/12.0/100.0;{
    int numPagos = tiempo * 12;
    float pagoMensual = (capital * tasaInteresMensual) / (1 - pow(1 + tasaInteresMensual, -numPagos));
    return pagoMensual;
}