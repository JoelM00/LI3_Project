import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class FilCli {
    private Map<String,List<CliProd>> cliProd;

    public FilCli() {
        this.cliProd = new HashMap<>();
    }

    public void addFilCli(Venda v) {
        if (!this.cliProd.containsKey(v.getCliente())) {
            this.cliProd.put(v.getCliente(),new ArrayList<>());
        }
        CliProd c = new CliProd(v.getMes(),v.getEpoca(),v.getPreco(),v.getQuantidade(),v.getProduto());
        this.cliProd.get(v.getCliente()).add(c);
    }
}
