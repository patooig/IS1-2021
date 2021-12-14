#include <vector>
#include "Postulante.hpp"
//#include "PostulacionExclusiva.hpp"

using namespace std;

class Profesional : public Postulante{

    private:

        int nivel;
        bool exclusivaPendiente;
        vector<PostulacionExclusiva>* postulaciones;

    public:
    
        Profesional(Postulante *p, int niv);
        void asignarExclusiva();
      
};

Profesional::Profesional(Postulante *p ,int niv):Postulante(p->getNombre(),p->getTelefono(),p->getMail(),p->getDireccion(),p->getComuna(),p->getPortafolio()){
        postulaciones = new vector<PostulacionExclusiva>;
        nivel = niv;
        exclusivaPendiente = false;
       
}


void Profesional::asignarExclusiva(){

        exclusivaPendiente = true;
}
