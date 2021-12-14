#include <string>
#include <vector>
#include "Venta.hpp"
#include "Catalogo.hpp"
#include "Factura.hpp"

struct info{
    time_t fecha;
    string codigo;
    int precio;
    bool facturado;
    vector<Reportaje> *reportajes;
    vector<ReportajeExclusivo> *exclusivos;
};

using namespace std;

class Suscripcion{

    private:

        time_t fechaSuscripcion;
        string codigo;
        int precioSuscripcion;
        int ventaMes;
        
        vector<Venta*> *ventas;
        vector<Factura*> *facturas;
        vector<info> *infoVentas;

    public:

        Suscripcion();
        void obtenerFyS();
    
};

Suscripcion::Suscripcion(){
 
    facturas = new vector<Factura*>;
    ventas = new vector<Venta*>;


}

void Suscripcion::obtenerFyS(time_t fecha, int numero){
    
    infoVentas = new vector<info>;
    for (int i = 0; i < ventas->size(); i++){
        Venta *v;
        v = ventas.at(i);
        if(v->getEstado() == false){
            infoVentas->push_back(v->obtenerInformacion());
            v->cambiarEstado();
        }
    }
    
    Factura * nuevaFactura = new Factura(infoVentas,precioSuscripcion,fecha,numero);
    facturas->push_back(nuevaFactura);
    cout<<"Factura creada"<<endl;
    delete infoVentas;

}
