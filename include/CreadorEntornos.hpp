#ifndef CREADOR_ENTORNOS
#define CREADOR_ENTORNOS
#include "Laberinto.hpp"
#include "Entorno.hpp"
#include <string>
class CreadorEntornos{
	
	void asignarEntorno(Entorno &entorno, std::string archivoEntorno){
		entorno.setRepresentacionEntorno(leerLaberinto(archivoEntorno));
	}
	
};

#endif
