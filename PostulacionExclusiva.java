import java.util.Date;

public class PostulacionExclusiva{

    private Date fechaPostulacion;
    private String estado;
    private Profesional profesional;

    public PostulacionExclusiva(){
        

    }

    public void asignarPostulante(){
        profesional.asignarExclusiva();
    }
}