#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "datacenters.h"

int arraymax, **matriz;

int  main ( void ) {

  char Archivo[]=( " datacenter.tsv ");

  Datacenter cam [contlin(arraymax, Archivo)];

  FILE * fp; 
  fp = fopen ( Archivo , "r " );

  char linea [ 255 ];
  int cont = 0;
  
  if(fp==NULL){
    printf("Nose ha leido el archivo");
    return 1;
  }


  while ( fgets (linea, 500 , fp)! = NULL ) { // Lee el archivo linea por linea
    linea [ strcspn (linea, "\r\n " )] = 0 ; // elimina el salto de linea de la palabra
    
    char delim [] = " \t" ; // define como delimitador el espacio para separar cada palabra
    char * palabra = strtok (linea, delim); // separa linea por delimitador (palabra por palabra) una vez
    int tipo =0;

    while (palabra!= NULL ) {    // recorre palabra a palabra
     if (tipo==0)
     cam[cont].codigo = atoi(palabra);

     if(tipo ==1){

     }
     if (tipo ==2){
       cam[cont].latitud=atof(palabra);

     }
     if(tipo==3){
      cam[cont].longitud=atof(palabra);

     } 
     tipo++;

     palabra= strtok(NULL,delim);

    }
    cont++;
  }



  
float distancia = calculo_distancia(cam[1].latitud, cam[1].longitud, cam[2].latitud, cam[2].longitud);

printf("la distancia es : %f\n", distancia);

printf("Codigo del datacenter &d, lat %f, lon %f", cam[1].codigo,cam[1].latitud,cam[1].longitud);



double ** CrearMatriz(int);
 
int tamaño = 30; 
double** matriz = CrearMatriz (tamaño);
void guardar_distancia_en_matriz(int tamaño, matriz, cam);



for ( int i=0 ; i < tamaño; i++ );{
  for ( int j=0 ; j < tamaño; j++){
    printf("&2.f", matriz [i][j]);
    
  }
}

  
  fclose (fp); // cierra el archivo de entrada

  return  0 ;
}