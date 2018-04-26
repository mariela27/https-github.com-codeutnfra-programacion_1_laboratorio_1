#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
//organizar la informacion para crear datos
{
    int legajo;
    char nombre[50];
    float promedio;

}eAlumno;//es el alias
//void mostrar (int legajo, char nombre[], float promedio, char email[]);
void mostrarUnAlumno (eAlumno miAlumno );
{
    eAlumno miAlumno={1, "juan", 3.25};//crear la variable
    eAlumno otroAlumno;

    otroAlumno.legajo=2;
    stropy(otroAlumno.nombre.nombre, "Maria");
    otroAlumno.promedio=6;
    printf("Ingrese legajo: ");
    scanf("%d", miAlumno.lenguaje);
    miAlumno=otrAlumno;
    mostrarUnAlumno(miAlumno);
    mostrarUnAlumno(otroAlumno);
    printf("%d %s %f\n", otroAlumno.legajo, otroAlumno.nombre, otroAlumno.promedio);
    return 0;
}
void mostrarUnAlumno (eAlumno miAlumno )
{
    printf("%d %s %f\n", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio);
}
//que reciba array y que muestre los alumnos
