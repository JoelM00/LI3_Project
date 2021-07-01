import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class CatalogoProdutos {
    private List<Produto> produtos;

    public CatalogoProdutos(List<Produto> produtos) {
        this.produtos = produtos;
    }

    public CatalogoProdutos() {
        this.produtos = new ArrayList<>();
    }

    public List<Produto> getProdutos() {
        return produtos;
    }

    public void setProdutos(List<Produto> produtos) {
        this.produtos = produtos;
    }

    public void ordenaAlf() {
        this.produtos.sort(new Comparator<Produto>() {
            @Override
            public int compare(Produto o1, Produto o2) {
                return o1.codigo.compareTo(o2.codigo);
            }
        });
    }
}
