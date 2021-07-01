import java.util.HashMap;
import java.util.Map;

public class Filiais {
    private Map<Integer,FilCli> filiais;

    public Filiais() {
        this.filiais = new HashMap<>();
    }

    public void addVenda(Venda v) {
        if (!this.filiais.containsKey(v.getFilial())) {
            this.filiais.put(v.getFilial(),new FilCli());
        }
        this.filiais.get(v.getFilial()).addFilCli(v);
    }

}
