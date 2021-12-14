#include <time.h>
#include <string> 
#include "Profesional.hpp"

using namespace std;

class PostulacionExclusiva{

    private:
        time_t fechaPostulacion;
        string estado;
        

    public: 
        Profesional * profesional;
        PostulacionExclusiva( Profesional* p);
        void asignarPostulante();
        Profesional * getProfesional();
        

        
};

PostulacionExclusiva::PostulacionExclusiva(Profesional *p){
    profesional = p;
}

void PostulacionExclusiva::asignarPostulante(){
    profesional->asignarExclusiva();
}

Profesional* PostulacionExclusiva::getProfesional(){

    return profesional;
}
