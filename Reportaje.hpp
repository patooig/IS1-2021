#include <string>
#include <vector>
#include <time.h>
#include "Tematica.hpp"

using namespace std;

class Reportaje{

    private :
        string codigoReportaje;
        string titulo;
        int numeroFotos;
        time_t fecha;
        vector<Tematica> * temas;

    public :
        Reportaje();
        string getTitulo();
        string getCodigo();
};

Reportaje::Reportaje(){
    
}

string Reportaje::getTitulo(){

    return titulo;
}

string Reportaje::getCodigo(){
    
    return codigoReportaje;
}
