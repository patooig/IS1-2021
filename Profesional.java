import java.util.Vector;

public class Profesional extends Postulante{
    private int nivel;
    private boolean exclusivaPendiente;
    
    private Vector<LiquidacionPago> liquidacionesPago;

    public Profesional(Postulante p ,int nivel){
        //Ingresar los datos del postulante, hay que obtener los datos
        // del postulante mediante métodos de la clase Postulante
        // (?) Se ingresan en el super()
        super();    // VER SI ES ACA EL SUPER() O EN POSTULANTE
        this.nivel = nivel;
        
        exclusivaPendiente = false;
        liquidacionesPago = new Vector<LiquidacionPago>();
    }

    public obtenerLiquidacionesPago(LiquidacionPago liquidacionPago){

        liquidacionesPago.add(liquidacionPago);
    
    }

    public void asignarExclusiva(){
        exclusivaPendiente = true;
    }
}
