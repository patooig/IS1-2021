#include <time.h>
#include <string>
#include <vector>
#include "Reportaje.hpp"
#include "ReportajeExclusivo.hpp"

using namespace std;

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
        void ventaRep(vector<Reportaje> *rep);
        void ventaEx(vector<ReportajeExclusivo> *exc);
        void obtenerInformacion();
        
};

Venta::Venta(){
    
}

void Venta::ventaRep(vector<Reportaje> *rep){

    reportajes = rep;
}

void Venta::ventaEx(vector<ReportajeExclusivo> *exc){

    exclusivos = exc;

}


void Venta::obtenerInformacion(){


}
