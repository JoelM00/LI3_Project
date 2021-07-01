import java.util.*;

public class CatalogoClientes {
    private List<Cliente> clientes;

    public CatalogoClientes(List<Cliente> clientes) {
        this.clientes = clientes;
    }

    public CatalogoClientes() {
        this.clientes = new ArrayList<>();
    }

    public List<Cliente> getClientes() {
        return clientes;
    }

    public void setClientes(List<Cliente> clientes) {
        this.clientes = clientes;
    }

    public void ordenaAlf() {
        this.clientes.sort(new Comparator<Cliente>() {
            @Override
            public int compare(Cliente o1, Cliente o2) {
                return o1.codigo.compareTo(o2.codigo);
            }
        });
    }
}
