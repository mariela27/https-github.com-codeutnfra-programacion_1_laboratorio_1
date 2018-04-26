#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char calle[50];
    int numero;
    char depto;
    char localidad[50];
    int piso;
    int codigoPostal;
}elDomicilio;
typedef struct
{
    int legajo;
    char nombre[50];
    elDomicilio domicilio;      //composicion
}elAlumno;

typedef struct
{
    int legajo;
    elDomicilio domicilio;

}elProfesor;
int main()
{
    elAlumno miAlumno;
    miAlumno.legajo=400;
    miAlumno.domicilio.codigoPostal=1870;

    printf("legajo:%d--codigoPostal:%d", miAlumno.legajo, miAlumno.domicilio.codigoPostal);
    return 0;
}
