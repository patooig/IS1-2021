#include <time.h>
#include <vector>
#include <string>
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

class Factura{

    private:
        int numero;
        time_t fecha;
        int monto;
        time_t mesFacturacion;
        

    public:
        Factura(vector<info> infoVentas, int precioSuscripcion, time_t fecha, int numero);
};

Factura::Factura(vector<info> infoVentas, int precioSuscripcion, time_t fecha, int numero){

    monto = 0;
    this.fecha = fecha;
    this.numero = numero;

    cout << fecha << " " << numero << endl;
    
    for(int i = 0; i < infoVentas.size(); i++){
        
        info aux = infoVentas->at(i)

        cout << aux.codigo << " " << aux.fecha <<endl;

        for(int j = 0; j < aux.reportajes->size(); j++){

            cout<<aux.reportajes->at(j).getCodigo()<< " ";
            cout<<aux.reportajes->at(j).getTitulo();
        }

        for(int j = 0; j < aux.exclusivos->size(); j++){

            cout<<aux.exclusivos->at(j).getCodigo() << " ";
            cout<<aux.exclusivos->at(j).getTitulo() << " ";
            cout<<aux.exclusivos->at(j).getPrecio() << endl;
        }

        cout<<aux.precio<<endl;

        monto += aux.precio;
        
    }

    cout <<"Suscripcion " << precio << endl;
    monto += precio;

    cout<<monto<<endl;
    
}