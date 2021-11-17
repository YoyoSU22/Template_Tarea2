typedef struct{
	char *nombre;
	double latitud;
  double longitud;
  int codigo;	
}Datacenter;

typedef  struct {
  int ver_1;
  int ver_2;
} Data;




double calcularDistancia(double latitud1,double longitud1,double latitud2, double longitud2);


void guardarDistanciasMatriz(int tamaño, double ** matriz. Datacenter * Data);