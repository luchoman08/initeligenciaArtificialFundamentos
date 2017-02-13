#ifndef CONFIG_HPP
#define CONFIG_HPP

class Config{
	
	private:
	
	int representacionActor;
	int representacionObjetivo;
	int representacionObstaculo;
	int representacionEspacioVacio;
	
	public:
	Config();
	int getRepresentacionActor();
	int getRepresentacionObjetivo();
	int getRepresentacionObstaculo();
	int getRepresentacionEspacioVacio();
	void setRepresentacionActor(int  representacionActor);
	void setRepresentacionObjetivo(int representacionObjetivo);
	void setRepresentacionObstaculo(int representacionObstaculo);
	void setRepresentacionEspacioVacio(int representacionEspacioVacio);
};
	
	Config::Config(){
		this->representacionActor = 2;
		this->representacionObjetivo = 1;
		this->representacionObstaculo = -1;
		this->representacionEspacioVacio = 0;
	}

    /**
     * @return the representacionActor
     */
    int Config::getRepresentacionActor() {
        return representacionActor;
    }

    /**
     * @param representacionActor the representacionActor to set
     */
     void Config::setRepresentacionActor(int representacionActor) {
        this->representacionActor = representacionActor;
    }

    /**
     * @return the representacionObjetivo
     */
    int Config::getRepresentacionObjetivo() {
        return representacionObjetivo;
    }

    /**
     * @param representacionObjetivo the representacionObjetivo to set
     */
     void Config::setRepresentacionObjetivo(int representacionObjetivo) {
        this->representacionObjetivo = representacionObjetivo;
    }

    /**
     * @return the representacionObstaculo
     */
     int Config::getRepresentacionObstaculo() {
        return representacionObstaculo;
    }

    /**
     * @param representacionObstaculo the representacionObstaculo to set
     */
     void Config::setRepresentacionObstaculo(int representacionObstaculo) {
        this->representacionObstaculo = representacionObstaculo;
    }

    /**
     * @return the representacionEspacioVacio
     */
     int Config::getRepresentacionEspacioVacio() {
        return representacionEspacioVacio;
    }

    /**
     * @param representacionEspacioVacio the representacionEspacioVacio to set
     */
     void Config::setRepresentacionEspacioVacio(int representacionEspacioVacio) {
        this->representacionEspacioVacio = representacionEspacioVacio;
	}

#endif
