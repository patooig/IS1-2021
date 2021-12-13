import java.util.Date;
import java.util.Vector;

public class ReportajeExclusivo{

    private String codigo;
    private String titulo;
    private int precio;
    private Date fechaSolicitud;
    private Date fechaAsignacion;
    private Date fechaEntrega;
    private Vector<Profesional> postulaciones;

    public ReportajeExclusivo(){
        postulaciones = new Vector<Profesional>();

    }

    public void asignarProf(Profesional p){
        
    }
    
}
