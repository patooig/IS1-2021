#include <time.h>
#include <string>
#include <vector>
#include "Reportaje.hpp"
#include "ReportajeExclusivo.hpp"

using namespace std;

struct info{
    time_t fecha;
    string codigo;
    int precio;
    bool facturado;
    vector<Reportaje> *reportajes;
    vector<ReportajeExclusivo> *exclusivos;
};


class Venta{

    private:
        time_t fecha;
        string codigo;
        int precio;
        bool facturado;
        vector<Reportaje> *reportajes;
        vector<ReportajeExclusivo> *exclusivos;

    public:
        Venta();

        void obtenerInformacion();
        
};

Venta::Venta(){
    
}




info Venta::obtenerInformacion(){

    info i1; 
    i1.fecha = this->fecha;
    i1.codigo = this->codigo;
    i1.precio = this->precio;
    i1.facturado = this->facturado;
    i1.reportajes = this->reportajes;
    i1.exclusivos = this->exclusivos;

    return i1;
}

void Venta::cambiarEstado(){
    facturado = true;
}

bool Venta::getEstado(){
    return facturado;
}

