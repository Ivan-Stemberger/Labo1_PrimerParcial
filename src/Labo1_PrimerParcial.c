#include <stdio.h>
#include <stdlib.h>
#include "Contribuyente.h"
#include "Recaudacion.h"
#include "Tipo.h"
#define len 1000


int main()
{

    int opcion;
    Contribuyente* listaContribuyentes[len];
    Recaudacion* listaRecaudaciones[len];
    Tipo listaTipo[3] = {1,"ARBA",2,"IIBB",3,"GANANCIAS"};

    do
    {
        printf("Elija una de las siguientes opciones.\n"
               "1) Alta de contribuyente.\n"
               "2) Modificar datos del contribuyente.\n"
               "3) Baja de contribuyente.\n"
               "4) Recaudacion.\n"
               "5) Refinanciar Recaudacion.\n"
               "6) Saldar recaudacion.\n"
               "7) Imprimir contribuyentes.\n"
               "8) Imprimir recaudacion.\n"
               "9) Salir.\n\n");

                scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            {
                if(alta_Contribuyente(listaContribuyentes, len))
                {
                    printf("El contribuyente ha sido cargado.\n");
                }

                break;
            }
            case 2:
            {
                if(modificar_Contribuyente(listaContribuyentes,len))
                {
                    printf("El contribuyente ha sido modificado.\n");
                }
                break;
            }
            case 3:
            {
                if(bajaContribuyente(listaContribuyentes,len))
                {
                    printf("El contribuyente ha sido eliminado.\n");
                }
                break;
            }
            case 4:
            {
                if(alta_Recaudacion(listaRecaudaciones,listaContribuyentes,listaTipo,len,len))
                {
                    printf("La recaudacion se ha cargado exitosamente.\n");
                }
                break;
            }
            case 5:
            {

                break;
            }
            case 6:
            {

                break;
            }
            case 7:
            {

                break;
            }
            case 8:
            {

                break;
            }
        }

    }while(opcion!=9);

    return 0;
}
