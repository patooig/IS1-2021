#include <time.h>
#include <vector>
//#include "Reportaje.hpp"

using namespace std;

class Catalogo{

    private: 
        int cantidadReportajes;
        time_t fechaActualizacion; 

        vector<Reportaje> *reportajes;

    public:
        Catalogo(vector<Reportaje> reportajes);
        vector<Reportaje> verCatalogo();
};

Catalogo::Catalogo(vector<Reportaje> r){

    reportajes = new vector<Reportaje>(r);

}

vector<Reportaje> Catalogo::verCatalogo(){

    return *reportajes;

}
