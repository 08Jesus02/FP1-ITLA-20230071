#include <stdio.h>

int main()
{
    float examen1, examen2;
    printf("ingrese la nota del primer examen: ");
    scanf("%f", &examen1);
    printf("ingrese la nota del segundo examen: ");
    scanf("%f", &examen2);

    float notaFinal;
    notaFinal = (examen1 + examen2) / 2;
    printf("Nota del primer examen: %.2f", examen1);
    printf("\nNota87 del segundo examen: %.2f", examen2);
    printf("\nLa nota final es: %.2f", notaFinal);
    return 0;
}
