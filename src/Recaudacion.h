#ifndef RECAUDACION_H_
#define RECAUDACION_H_
#include "Contribuyente.h"
#include "Tipo.h"


typedef struct
{
    int id;
    int idContribuyente;
    int mes;
    char tipo[10];
    float importe;
    char estado[12];
}Recaudacion;




int agregarRecaudacion(Recaudacion* list[], int len, int id, int mes, Tipo listTipo[], int tipo, float importe);
int alta_Recaudacion(Recaudacion* list[], Contribuyente* listContribuyente[], Tipo listTipo[], int len, int lenContribuyente);
void setIdContribuyente(Recaudacion* Recaudacion,int id);
void setMes(Recaudacion* Recaudacion,int mes);
void setTipo(Recaudacion* Recaudacion,int tipo,Tipo listTipo[]);
void setImporte(Recaudacion* Recaudacion,float importe);

#endif /* RECAUDACION_H_ */
