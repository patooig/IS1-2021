#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#include "Editorial.hpp"

using namespace std;

int main(){

    cout << "hola bart " <<endl; 
    Reportaje * r = new Reportaje();
    vector <Reportaje> * rep = new vector<Reportaje>;
    rep->push_back(*r);
    Catalogo * c = new Catalogo(*rep);
    Suscripcion * s = new Suscripcion(time(NULL),"cod",100,c);
    Editorial * e = new Editorial("E1423","a","4345454","ola@gmail.com","calle false 123", "chillan", s);

    e->obtenerFactura();
    return 0;
}