#include <string>
#include <time.h>
#include <vector>
#include "PostulacionExclusiva.hpp"

using namespace std;

class ReportajeExclusivo{

    private: 

        string codigo;
        string titulo;
        int precio;
        time_t fechaSolicitud;
        time_t fechaAsignacion;
        time_t fechaEntrega;
        vector<PostulacionExclusiva> *postulaciones;


    public:

        ReportajeExclusivo();
        void asignarProf(Profesional p);    
        string getTitulo();
        string getCodigo();
    
};

ReportajeExclusivo::ReportajeExclusivo(string tit, int pre){
    postulaciones = new vector<PostulacionExclusiva>;
    titulo = tit;
    precio = pre;
    
    

}

void ReportajeExclusivo::asignarProf(Profesional p){
    PostulacionExclusiva pe;
    for (int i = 0; i < postulaciones->size(); i++){
        pe = postulaciones->at(i);
        if(pe.profesional.getNombre() = p.getNombre()){
            pe.asignarPostulante();
            break;
        }
    }   
}

string ReportajeExclusivo::getTitulo(){

    return titulo;
}

string ReportajeExclusivo::getCodigo(){
    
    return codigo;
}

int ReportajeExclusivo::getPrecio(){
    return precio;
}
