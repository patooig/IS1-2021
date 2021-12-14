#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#include "Editorial.hpp"
//#include "Postulante.hpp"
//#include "Reportaje.hpp"
//#include "Venta.hpp"
//#include "Profesional.hpp"
//#include "Factura.hpp"
//#include "NotificacionPostulante.hpp"
//#include "Tematica.hpp"
//#include "Suscripcion.hpp"
//#include "ReportajeExclusivo.hpp"
//#include "LiquidacionPago.hpp"
//#include "Catalogo.hpp"
#include "PostulacionExclusiva.hpp"

using namespace std;


void funcionEditorial(){


}



void funcionAgencia(){


}

int main(){

    Postulante * p1 = new Postulante("Patricio","911","pato@gmail.com","Avenida Siempreviva 123","Chillan","www.flick.com");
    Postulante * p2 = new Postulante("Leonardo","1311","leo@gmail.com","Calle Falsa 456","Shelbyville","www.portafolio.net");
    Postulante * p3 = new Postulante("Matias","1234","mamartinez2017@udec.cl","Avenida siempreviva","Springfield","www.tumblr.com");
    Postulante * p4 = new Postulante("Ivonne","0000","ivonne@gmail.com","Calle falsa 666","Huepil","www.fotolog.com");
    
    vector<Postulante*> postulantes;

    postulantes.push_back(p1);
    postulantes.push_back(p2);
    postulantes.push_back(p3);
    postulantes.push_back(p4);

    postulantes[0]->notificar("Aceptado");
    postulantes[1]->notificar("Aceptado");
    postulantes[2]->notificar("Rechazado xd");
    postulantes[3]->notificar("Rechazado");
    
    //Creacion de profesional
    Profesional *pro1 = new Profesional(postulantes[0], 3);
    Profesional *pro2 = new Profesional(postulantes[1], 2);
    PostulacionExclusiva(pro1);



    cout << "hola bart " <<endl; 
    Reportaje * r = new Reportaje();
    vector <Reportaje> * rep = new vector<Reportaje>;
    rep->push_back(*r);
    Catalogo * c = new Catalogo(*rep);
    Suscripcion * s = new Suscripcion(time(NULL),"cod",100,c);
    Editorial * e = new Editorial("E1423","a","4345454","ola@gmail.com","calle false 123", "chillan", s);

    e->obtenerFactura();

    delete p1,p2,p3,p4;
    return 0;
}