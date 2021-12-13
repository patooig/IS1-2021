#include <time.h>
#include <string> 
#include <Profesional.hpp>

using namespace std;

class PostulacionExclusiva{

    private:
        time_t fechaPostulacion;
        string estado;
        Profesional * profesional;

    public: 
        PostulacionExclusiva( Profesional* p);
        void asignarPostulante();
        

        
};

PostulacionExclusiva::PostulacionExclusiva(Profesional *p){
    profesional = p;
}

void PostulacionExclusiva::asignarPostulante(){
    profesional->asignarExclusiva();
}