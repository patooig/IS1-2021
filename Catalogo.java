import java.util.Date;
import java.util.Vector;

public class Catalogo{

    private int cantidadReportajes;
    private Date fechaActualizacion;

    private Vector<Reportaje> reportajes;

    public Catalogo(){

    }

    public Vector<Reportaje> verCatalogo(){

        return reportajes;

    }
}
