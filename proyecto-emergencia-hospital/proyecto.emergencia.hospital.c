#include <stdio.h>

int main()
{
    int nivel = 1;

    printf("Nivel 1: ¿Cuál es tu síntoma principal?\n");
    printf("   1. Síntomas respiratorios\n");
    printf("   2. Síntomas digestivos\n");

    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1)
    { // Síntomas respiratorios
        printf("Nivel 2: ¿Tienes fiebre?\n");
        printf("   1. Sí\n");
        printf("   2. No\n");

        int opcion2;
        scanf("%d", &opcion2);

        if (opcion2 == 1)
        { // Fiebre
            printf("Nivel 3: ¿Tienes fiebre alta?\n");
            printf("   1. Sí\n");
            printf("   2. No\n");

            int opcion3;
            scanf("%d", &opcion3);

            if (opcion3 == 1)
            { // Fiebre
                printf("Nivel 4: ¿Te sientes congestinado?\n");
                printf("   1. Sí\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);

                if (opcion3 == 1)
                { // Esta congestionado
                    printf("Nivel 5: ¿hace frio en el lugar que te encuentras?\n");
                    printf("   1. Sí\n");
                    printf("   2. No\n");

                    int opcion3;
                    scanf("%d", &opcion3);

                    if (opcion3 == 1)
                    { // Fiebre
                        printf("Nivel 5: ¿Tienes mucho tiempo ahí?\n");
                        printf("   1. Sí\n");
                        printf("   2. No\n");

                        int opcion3;
                        scanf("%d", &opcion3);

                        if (opcion3 == 1)
                        { // Fiebre
                            printf("Abrigese, tomese una acetaminofen y descanse para que sude la fiebre\n");
                        }
                    }
                }
                else if (opcion3 == 2)
                {
                }
            }
        }

        else if (opcion2 == 2)
        { // Sin fiebre
            printf("Nivel 3: ¿Tienes tos persistente?\n");
            printf("   1. Sí\n");
            printf("   2. No\n");

            int opcion3;
            scanf("%d", &opcion3);

            if (opcion3 == 1)
            {
            }
            else if (opcion3 == 2)
            {
            }
        }
    }

    else if (opcion == 2)
    { // Síntomas digestivos
        printf("Nivel 2: ¿Tienes náuseas y vómitos?\n");
        printf("   1. Sí\n");
        printf("   2. No\n");

        int opcion2;
        scanf("%d", &opcion2);

        if (opcion2 == 1)
        { //  Si e tenido nauseas o vomitos
            printf("Nivel 3: ¿has tenido diarrea?\n");
            printf("   1. Sí\n");
            printf("   2. No\n");

            int opcion3;
            scanf("%d", &opcion3);

            if (opcion3 == 1)
            {
            }
            else if (opcion3 == 2)
            {
            }
        }
        else if (opcion2 == 2)
        { //
            printf("Nivel 3: ¿tienes dolor abdominal?\n");
            printf("   1. Sí\n");
            printf("   2. No\n");

            int opcion3;
            scanf("%d", &opcion3);

            if (opcion3 == 1)
            {
                printf("Nivel : ¿tienes dolor abdominal?\n");
                printf("   1. Sí\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);
            }
            else if (opcion3 == 2)
            {
                // Continuar con más preguntas y recomendaciones...
            }
        }
    }

    return 0;
}