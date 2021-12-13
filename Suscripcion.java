import java.util.Date;
import java.util.Vector;

public class Suscripcion{

    private Date fechaSuscripcion;
    private String codigo;
    private int precioSuscripcion;
    private int ventaMes;
    
    private Vector<Venta> ventas;
    private Vector<Venta> nuevasVentas;
    private Vector<Factura> facturas;
    private Catalogo catalogo;

    public Suscripcion(){

        facturas = new Vector<Factura>();
        ventas = new Vector<Venta>();

    }

    public void obtenerFyS(){

        Factura nuevaFactura = new Factura();

        facturas.add(nuevaFactura);
    }

    public Vector<Reportaje> comprar(){

        return catalogo.verCatalogo();
    }

}
