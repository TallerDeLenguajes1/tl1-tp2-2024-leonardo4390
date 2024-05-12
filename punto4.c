#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct
{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu;//valores del arreglo tipos
}typedef compu;


void guardarPc(compu cputadora[5], char tipos[6][10]);
void presentarPc(compu cputadora[5], char tipos[6][10]);
void pcVieja(compu cputadora[5], char tipos[6][10]);
void mayorVelicidad(compu cputadora[5], char tipos[6][10]);
int main()
{
    compu cputadora[5];
    char tipos[6][10]={"Intel", "ADM","Celeron","Athlon","Core","Pentium"};

    guardarPc(cputadora, tipos);
    presentarPc(cputadora,tipos);

    //pc mas vieja
    pcVieja(cputadora, tipos);
    mayorVelicidad(cputadora,tipos);


    return 0;
}

void guardarPc(compu cputadora[5], char tipos[6][10])
{
    srand(time(NULL));
    for(int i = 0; i < 5; i ++)
    {
        cputadora[i].tipo_cpu = tipos[i];
        cputadora[i].velocidad = rand() % 3 + 1;
        cputadora[i].anio=rand() % 8 + 2015;
        cputadora[i].cantidad = rand() % 8 + 1;
    }
}
void presentarPc(compu cputadora[5], char tipos[6][10])
{
    printf("\n-------------LISTA DE PC-------------\n");
    for(int i = 0; i < 5; i ++)
    {
        printf("\nTipo: %s",cputadora[i].tipo_cpu);
        printf("\nVelicidad: %d",cputadora[i].velocidad);
        printf("\nAnio: %d",cputadora[i].anio);
        printf("\nCantidad de nucleo: %d",cputadora[i].cantidad);
        printf("\n");
    }
}

void pcVieja(compu cputadora[5], char tipos[6][10])
{
    int viejaPc = 0;
    for(int i = 0; i < 5; i ++)
    {
        if(cputadora[i].anio < viejaPc || viejaPc == 0)
        {
            viejaPc = cputadora[i].anio;
        }
    }

    printf("\n------------PC MAS VIEJA--------------");
    for(int i = 0; i < 5; i ++)
    {
        if(cputadora[i].anio==viejaPc)
        {
            printf("\nTipo: %s",cputadora[i].tipo_cpu);
            printf("\nVelicidad: %d",cputadora[i].velocidad);
            printf("\nAnio: %d",cputadora[i].anio);
            printf("\nCantidad de nucleo: %d",cputadora[i].cantidad);
            printf("\n");
        }
    }

    
}

void mayorVelicidad(compu cputadora[5], char tipos[6][10])
{
    int mayVel = 0;
    for(int i = 0; i < 5; i ++)
    {
        if(cputadora[i].velocidad > mayVel)
        {
            mayVel = cputadora[i].velocidad;
        }
    }
    printf("\n------------PC MAYOR VELICIDAD--------------");
    for(int i = 0; i < 5; i ++)
    {
        if(mayVel==cputadora[i].velocidad)
        {
            printf("\nTipo: %s",cputadora[i].tipo_cpu);
            printf("\nVelicidad: %d",cputadora[i].velocidad);
            printf("\nAnio: %d",cputadora[i].anio);
            printf("\nCantidad de nucleo: %d",cputadora[i].cantidad);
            printf("\n");
        }
    }
}