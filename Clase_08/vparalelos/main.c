#include <stdio.h>
#include <stdlib.h>
float calcularPromedio(int,int);
int main()
{
    int indice;
    int auxLegajo;
    int legajo[3];//[t]constante
    char nombre[3][30];//29 caracteres mas el barra cero
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("ingrese el legajo ");
        scanf("%d",&legajo[i]);
        printf("ingrese el nombre ");
        fflush(stdin);
        gets(nombre[i]);
        printf("ingrese la nota1 ");
        scanf("%d",&nota1[i]);
        printf("ingrese la nota2 ");
        scanf("%d",&nota2[i]);
        promedio[i]=calcularPromedio(nota1[i],nota2[i]);

    }
    for(i=0; i<3; i++)
    {
        printf("\n%d",legajo[i]);
        printf("\n%s", nombre[i]);
        printf("\n%d",nota1[i]);
        printf("\n%d",nota2[i]);
        printf("\n%.2f\n", promedio[i]);
    }
    printf("ingrese el legajo");
    scanf("%d", &auxLegajo);
    for(i=0; i<3; i++)
    {
        if(auxLegajo==legajo[i])//[i] es la posicion
        {
            indice=i;
            break;
        }
    }
        printf("\n%d",legajo[indice]);
        printf("\n%s", nombre[indice]);
        printf("\n%d",nota1[indice]);
        printf("\n%d",nota2[indice]);
        printf("\n%.2f\n", promedio[indice]);
    return 0;
}
float calcularPromedio(int nota1,int nota2)
{
    float promedio;
    promedio=(float)(nota1+nota2)/2;

    return promedio;
}
