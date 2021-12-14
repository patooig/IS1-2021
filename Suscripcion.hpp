#include <string>
#include <vector>
#include "Venta.hpp"
#include "Catalogo.hpp"
#include "Factura.hpp"

using namespace std;

class Suscripcion{

    private:
    time_t fechaSuscripcion;
    string codigo;
    int precioSuscripcion;
    int ventaMes;
    
    vector<Venta*> *ventas;
    vector<Venta*> *nuevasVentas;
    vector<Factura*> *facturas;
    Catalogo *catalogo;

    public:
    Suscripcion(time_t fechaSus, string cod, int precioSus, Catalogo *cat);
    void obtenerFyS();
    vector<Reportaje> comprar();
    
};

Suscripcion::Suscripcion(time_t fechaSus, string cod, int precioSus, Catalogo *cat){
    fechaSuscripcion = fechaSus;
    codigo = cod;
    fechaSuscripcion = fechaSus;
    precioSuscripcion = precioSus;
    catalogo = cat;
    
    facturas = new vector<Factura*>;
    ventas = new vector<Venta*>;


}

void Suscripcion::obtenerFyS(){

    Factura * nuevaFactura = new Factura();

    facturas->push_back(nuevaFactura);

    cout<<"Factura creada"<<endl;
}

vector<Reportaje> Suscripcion::comprar(){

        return catalogo->verCatalogo();
}