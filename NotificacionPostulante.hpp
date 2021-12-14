#include <string>

using namespace std;


class NotificacionPostulante{

    private:

        string comentario;

    public:
    
        NotificacionPostulante(string comentario);

};

NotificacionPostulante::NotificacionPostulante(string comentario){
    
    this->comentario = comentario; 

}