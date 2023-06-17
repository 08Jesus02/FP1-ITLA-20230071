#include <string.h>
/* Estructuras-2.
El programa muestra la manera en que se declara una estructura, así como la ➥forma en que se tiene acceso a los campos de los apuntadores de tipo estructura ➥tanto para lectura como para escritura. Se utiliza además una función que ➥recibe como parámetro un apuntador de tipo estructura. */
struct alumno 
/* Declaración de la estructura. */
{
int matricula;
char nombre[20]; 
char carrera[20]; 
float promedio; 
char direccion[20];
};

void Lectura(struct alumno *);
{
struct alumno a0 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
struct alumno *a3, *a4, *a5, a6;

a3 = &a0;
a4 = new (struct alumno);
printf("\nIngrese la matrícula del alumno 4: ");
scanf("%d", &(*a4).matricula); 
fflush(stdin);
printf("Ingrese el nombre del alumno 4: "); 
gets(a4->nombre);
printf("Ingrese la carrera del alumno 4: "); 
gets((*a4).carrera);
printf("Ingrese promedio del alumno 4: "); 
scanf("%f", &a4->promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno 4: "); 
gets(a4->direccion);

a5 = new (struct alumno);
Lectura(a5);
Lectura(&a6);

printf(”\nDatos del alumno 3\n”);
printf(”%d\t%s\t%s\t%.2f\t%s”, a3->matricula, a3->nombre, a3->carrera, ➥a3->promedio, a3->direccion);
}
