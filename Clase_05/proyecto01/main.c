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
int buscarLibre(int[], int);
/** \brief muestra los productos en forma de lista
 *
 * \param int[] ids
 * \param char[][50] descripcion
 * \param int[] stock
 * \param float[] precio unitario
 * \param int cantidad de elementos
 * \return void
 *
 */
void mostrarProuctos(int[], char[][50], int[], float[], int);
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


/*

                    printf("Ingrese ID: ");
                    scanf("%d", &idProducto[posicion-1]);
                    printf("Ingrese descripcion: ");
                    scanf("%[^\n]", descripcion[posicion-1]);
                    //gets(descripcion[posicion-1]);
                    printf("Ingrese stock: ");
                    scanf("%d", &stock[posicion-1]);
                    printf("Ingrese precio unitario: ");
                    scanf("%d", &precioUnitario[posicion-1]);


                    seguir= getche();//devuelve un caracter



                break;

                /*1-pedir posicion
                2-pedir el dato
                3-preguntar si quiere cargar otro*/
                break;
            case 2:
                printf("muestro\n");

                for(i=0; i<T; i++)
                {
                    printf("%5d %20s %5d %5.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i] )
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
int buscarLibre(int id[], int tam)
{
    int index= -1;
    int i;
    for(i=0; i<t; i++)
    {
      if(id[i]==0)
      {
          index=i;
          break;
      }
    }
    return index;
}
