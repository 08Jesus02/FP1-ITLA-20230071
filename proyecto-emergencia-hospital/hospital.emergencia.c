#include <stdio.h>

int main()
{
    int consciente, sangrado, dificultadRespirar, dolorPecho, fiebre;

    printf("Programa de Emergencia del Hospital\n");

    printf("¿El paciente está consciente y respirando? (1: Sí, 0: No): ");
    scanf("%d", &consciente);

    if (!consciente)
    {
        printf("Realizar maniobras de reanimación cardiopulmonar (RCP).\n");
        return 0;
    }

    printf("¿El paciente tiene sangrado profuso? (1: Sí, 0: No): ");
    scanf("%d", &sangrado);

    if (sangrado)
    {
        printf("Aplicar presión directa en la zona de sangrado y elevar la extremidad si es posible.\n");
        return 0;
    }

    printf("¿El paciente tiene dificultad para respirar o está asfixiándose? (1: Sí, 0: No): ");
    scanf("%d", &dificultadRespirar);

    if (dificultadRespirar)
    {
        printf("Realizar maniobra de Heimlich o maniobras para despejar la vía respiratoria.\n");
        return 0;
    }

    printf("¿El paciente muestra signos de dolor en el pecho o síntomas de ataque cardíaco? (1: Sí, 0: No): ");
    scanf("%d", &dolorPecho);

    if (dolorPecho)
    {
        printf("Administrar aspirina si está indicado y activar el protocolo de atención para ataques cardíacos.\n");
        return 0;
    }

    printf("¿El paciente tiene fiebre alta o síntomas graves de enfermedad? (1: Sí, 0: No): ");
    scanf("%d", &fiebre);

    if (fiebre)
    {
        printf("Evaluar y administrar medicamentos según el protocolo del hospital.\n");
        return 0;
    }

    printf("Fin del programa de emergencia.\n");

    return 0;
}
