import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class FatProd {
    public Map<Integer,List<Faturado>> filFat;

    public FatProd(Map<Integer, List<Faturado>> filFat) {
        this.filFat = filFat;
    }

    public FatProd() {
        this.filFat = new HashMap<>();
    }

    public void addFatProd(Venda v) {
        if (!this.filFat.containsKey(v.getFilial())) {
            this.filFat.put(v.getFilial(),new ArrayList<>());
        }
        Faturado f = new Faturado(v.getMes(),v.getEpoca(),v.getPreco(),v.getQuantidade(),v.getCliente());
        this.filFat.get(v.getFilial()).add(f);
    }


}
