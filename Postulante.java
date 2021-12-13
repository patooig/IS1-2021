

public class Postulante {
    private String nombre;
    private String telefono;
    private String mail;
    private String direccion;
    private String comuna;
    private String portafolio;

    private NotificacionPostulante nP;

    public Postulante(String nombre, String telefono, String mail, String direccion, String comuna, String portafolio){
        super();
        this.nombre = nombre;
        this.telefono = telefono;
        this.mail = mail;
        this.direccion = direccion;
        this.comuna = comuna;
        this.portafolio = portafolio;

    }

    public void notificar(String comentario){

        nP = new NotificacionPostulante(comentario);
    }

    //Método que retorne los datos del postulante
}
