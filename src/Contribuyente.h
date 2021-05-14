#ifndef CONTRIBUYENTE_H_
#define CONTRIBUYENTE_H_

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    char cuil[14];
}Contribuyente;

int agregarContribuyente(Contribuyente* contribuyente[], int len, char nombre[],char apellido[],char cuil[]);
int alta_Contribuyente(Contribuyente* list[], int len);
int initContribuyente(Contribuyente* list[], int len);
void setNombre(Contribuyente* contribuyente,char nombre[]);
void setApellido(Contribuyente* contribuyente,char apellido[]);
void setCuil(Contribuyente* contribuyente,char cuil[]);
int encontrar_Contribuyente(Contribuyente* list[], int len,int id);
int modificar_Contribuyente(Contribuyente* list[],int len);
int bajaContribuyente(Contribuyente* list[],int len);
void borrarContribuyente(Contribuyente* list[], int posicion);


#endif /* CONTRIBUYENTE_H_ */
