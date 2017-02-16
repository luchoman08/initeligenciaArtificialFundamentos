#include "../lib/Laberinto.hpp"

int main(int args, char** argv){
	int** entorno = leerLaberinto("entorno1.eno");
	int filas = sizeof(entorno);
	printf("%d \n",filas);
	//imprimirMatrizDinamica(entorno, 5 ,5);
	return 0;
}
