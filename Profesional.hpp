#include <vector>
#include "Postulante.hpp"
#include "LiquidacionPago.hpp"

using namespace std;

class Profesional : public Postulante{

    private:

        int nivel;
        bool exclusivaPendiente;
        vector<LiquidacionPago> *liquidacionesPago;


    public:
    
        Profesional(Postulante p, int niv);
        void obtenerLiquidacionesPago(LiquidacionPago liquidacionPago);
        void asignarExclusiva();
      
};

Profesional::Profesional(Postulante p ,int niv):Postulante(p.getNombre(),p.getTelefono(),p.getMail(),p.getDireccion(),p.getComuna(),p.getPortafolio()){
        //Ingresar los datos del postulante, hay que obtener los datos
        // del postulante mediante métodos de la clase Postulante
        // (?) Se ingresan en el super()
                // VER SI ES ACA EL SUPER() O EN POSTULANTE
        nivel = niv;
        
        exclusivaPendiente = false;
        liquidacionesPago = new vector<LiquidacionPago>;
}

void Profesional::obtenerLiquidacionesPago(LiquidacionPago liquidacionPago){

        liquidacionesPago->push_back(liquidacionPago);
    
}

void Profesional::asignarExclusiva(){

        exclusivaPendiente = true;
}
