#include <time.h>

using namespace std;

class Factura{

    private:
        int numero;
        time_t fecha;
        int monto;
        time_t mesFacturacion;

    public:
        Factura();
};

Factura::Factura(){

}