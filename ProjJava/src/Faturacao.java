import java.util.HashMap;
import java.util.Map;

public class Faturacao {
    private Map<String,FatProd> faturacao;

    public Faturacao() {
        this.faturacao = new HashMap<>();
    }

    public void addVenda(Venda v) {
        if (!this.faturacao.containsKey(v.getProduto())) {
            this.faturacao.put(v.getProduto(), new FatProd());
        }
        this.faturacao.get(v.getProduto()).addFatProd(v);
    }
}
