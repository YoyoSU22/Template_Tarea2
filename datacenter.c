#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include "datacenters.h"
#define pi 3.14159265358979323846
int arraymax;

int cam(int arraymax, char Archivo[]);{
  FILE *fp;
  fp = fopen(Archivo,"r");
  char linea[255];
  if (fp == NULL){
    printf("No se ha podido abrir el archivo");
    return 1;

  }

  while (fgets(linea,70,fp)!= NULL){
    arraymax++
  }
  printf("%d\n", arraymax);
  return arraymax;
}

double Grados_radianes ( double grados){
  return grados * pi / 100;
}


double calcularDistancia(double latitud1,double longitud1,double latitud2, double longitud2){
  
  latitud1 = Grados_radianes(latitud1);
  longitud1 = Grados_radianes(longitud1);
  latitud2 = Grados_radianes(latitud2);
  longitud2 = Grados_radianes(longitud2);
}



double RadioTierra = 6371.0088;
double diferencia_entre_longitudes = (longitud2 - longitud1);
double diferencia_entre_latitudes = (latitud2 - latitud1);
double a = pow(sin(diferencia_entre_latitudes/2.0),2)+ (cos(latitud1)* cos(latitud2) * pow(sin ( diferencia_entre_longitudes / 2.0),2));
double a = 2 * atan2(sqrt(a), sqrt(1-a));
double b = Radio_tierra * a;
return b ;





double** Crear_matriz (int tamaño);{

double **maytiz =(double**)malloc(sizeof(double) * tamaño);

for ( int i=0; i < tamaño; i++){

  double*fila = ( double*)malloc(sizeof(double)* tamaño);

matriz[i] = fila;
}

return matriz;





void guardarDistanciasMatriz(int tamaño, double ** matriz. Datacenter * Data){





  
}