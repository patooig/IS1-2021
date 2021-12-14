#include <string>
#include "PostulacionExclusiva.hpp"
#include "NotificacionPostulante.hpp"

class Postulante {

    private:

        string nombre;
        string telefono;
        string mail;
        string direccion;
        string comuna;
        string portafolio;
        NotificacionPostulante * nP;

    public : 

        Postulante(string nombre, string telefono, string mail, string direccion, string comuna, string portafolio);
        void notificar(string comentario);
        string getNombre();
        string getTelefono();
        string getMail();
        string getDireccion();
        string getComuna();
        string getPortafolio();

};

Postulante::Postulante(string nombre, string telefono, string mail, string direccion, string comuna, string portafolio){
        
        this->nombre = nombre;
        this->telefono = telefono;
        this->mail = mail;
        this->direccion = direccion;
        this->comuna = comuna;
        this->portafolio = portafolio;

}

void Postulante::notificar(string comentario){

    nP = new NotificacionPostulante(comentario);
        
}


//Métodos para la creacion del objeto Profesional

string Postulante::getNombre(){

    return nombre;    
}

string Postulante::getTelefono(){
    
    return telefono;
}

string Postulante::getMail(){
    
    return mail;
}

string Postulante::getDireccion(){
    
    return direccion;
}

string Postulante::getComuna(){

    return comuna;
}

string Postulante::getPortafolio(){

    return portafolio;
}
