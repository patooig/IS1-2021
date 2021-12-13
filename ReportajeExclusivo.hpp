#include <string>
#include <time.h>
#include <vector>
#include "Profesional.hpp"

using namespace std;

class ReportajeExclusivo{
    private: 
    string codigo;
    string titulo;
    int precio;
    time_t fechaSolicitud;
    time_t fechaAsignacion;
    time_t fechaEntrega;
    vector<Profesional> *postulaciones;


    public:
    ReportajeExclusivo();
    void asignarProf(Profesional p);

    
    
};

ReportajeExclusivo::ReportajeExclusivo(){
    postulaciones = new vector<Profesional>;

}

void ReportajeExclusivo::asignarProf(Profesional p){
        
    }
