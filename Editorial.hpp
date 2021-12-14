#include <string>
#include "Suscripcion.hpp"

using namespace std;

class Editorial{

    private:
        string codigo;
        string nombre;
        string telefono;
        string mail;
        string direccion;
        string comuna;

        Suscripcion *suscripcion;


    public:
        Editorial(string cod, string nom, string telef, string email, string direcc, string com, Suscripcion *sus);
        void obtenerFactura();  
};

Editorial::Editorial(string cod, string nom, string telef, string email, string direcc, string com, Suscripcion *sus){
    
    codigo = cod;
    nombre = nom;
    telefono = telef;
    mail = email;
    direccion = direcc;
    comuna = com;
    
    suscripcion = sus;
}

void Editorial::obtenerFactura(){
    
    suscripcion->obtenerFyS();

}