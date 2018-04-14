#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define T 5

//idProducto (int) 5 productos
//descripcion 30 caracteres (matris de char)
//stock
//precio unitario
//menu de usuario
/*  *cargar
    *mostrar
    *ordenar
*/
int buscarLibros(int[], int);
int main()
{
    int idProducto[T];
    char descripcion[T][50];
    float precioUnitario[T];
    int stock[T];
    int opcion;
    int posicion;
    char seguir='s';
    int i;
    do
    {
        printf("1--cargar\n2--mostrar\n3--ordenar\n");
        scanf("Ingrese la opcion: ");
        scanf("%d", opcion);
        switch(opcion)
        {
            case 1:
                printf("cargo\n");



                do
                {
                    printf("Ingrese la posicion: ");
                    scanf("%f", &posicion);
                    printf("Ingrese ID: ");
                    scanf("%d", &idProducto[posicion-1]);
                    printf("Ingrese descripcion: ");
                    scanf("%[^\n]", descripcion[posicion-1]);
                    //gets(descripcion[posicion-1]);
                    printf("Ingrese stock: ");
                    scanf("%d", &stock[posicion-1]);
                    printf("Ingrese precio unitario: ");
                    scanf("%d", &precioUnitario[posicion-1]);

                    printf("Desea continuar? (s/n): ");
                    seguir= getche();//devuelve un caracter

                }while(seguir=='s');

                break;

                /*1-pedir posicion
                2-pedir el dato
                3-preguntar si quiere cargar otro*/
                break;
            case 2:
                printf("muestro\n");

                for(i=0; i<T; i++)
                {
                    printf("%5d %20s %5d %5.2f\n", idProducto[posicion-1], descripcion[posicion-1], )
                }
                /*
                mostrar cada vector paralelo
                */
                break;
            case 3:
                printf("ordeno\n");
                break;
        }while(opcion!=9);

    }
    return 0;
}
int buscarLibros(int [], int)
