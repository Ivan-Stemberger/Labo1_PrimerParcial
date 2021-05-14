#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tipo.h"
#include "Recaudacion.h"
#include "Contribuyente.h"
#include "Validaciones.h"



int alta_Recaudacion(Recaudacion* list[], Contribuyente* listContribuyente[], Tipo listTipo[], int len, int lenContribuyente)
{
    char aux[51];
    int id;
    int mes;
    int tipo;
    int importe;
    int error = 1;



            do
            {
                printf("Por favor introduzca el ID del contribuyente.\n");
                scanf("%s",aux);
                if(esNumerico(aux) && encontrar_Contribuyente(listContribuyente,lenContribuyente,atoi(aux)) != 0)
                {
                    id = atoi(aux);

                }
            }while(validacionMes(aux));



            do
            {
                printf("Por favor introduzca el mes.\n");
                scanf("%s",aux);
                if(validacionMes(aux))
                {
                    mes = atoi(aux);

                }
            }while(validacionMes(aux));


            do
            {
                 printf("Por favor introduzca el tipo.\n"
                        "1) ARBA.\n"
                        "2) IIBB.\n"
                        "3) GANANCIAS\n");
                scanf("%d",&tipo);

            }while(tipo>0 && tipo<4);

            do
            {
                printf("Por favor introduzca el importe.\n");
                scanf("%s",aux);
                if(esNumerico(aux))
                {
                    importe = atof(aux);
                }
            }while(esNumerico(aux));

            agregarRecaudacion(list, len, id, mes, listTipo, tipo, importe);

            error = 0;



    return error;
}



int agregarRecaudacion(Recaudacion* list[], int len, int id, int mes, Tipo listTipo[], int tipo, float importe)
{
    int i;
    int error = 0;

    if(list != NULL && len>0)
    {
        for(i=0;i<len;i++)
        {
            if((*list[i]).idContribuyente == 0)
            {
                (*list[i]).id = i + 100;
                setIdContribuyente(list[i],id);
                setMes(list[i], mes);
                setTipo(list[i],tipo, listTipo);
                setImporte(list[i],importe);
                error = 1;
            }
        }
    }
    return error;
}

void setIdContribuyente(Recaudacion* Recaudacion,int id)
{
    (*Recaudacion).idContribuyente = id;

}

void setMes(Recaudacion* Recaudacion,int mes)
{
    (*Recaudacion).mes = mes;

}

void setTipo(Recaudacion* Recaudacion,int tipo,Tipo listTipo[])
{
    int i;

    for(i = 0; i<3;i++)
    {
        if(listTipo[i].id == tipo)
        {
            strcpy((*Recaudacion).tipo,listTipo[i].descripcion);
        }
    }

}

void setImporte(Recaudacion* Recaudacion,float importe)
{
    (*Recaudacion).importe = importe;

}


