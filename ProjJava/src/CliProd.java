import java.util.Map;

public class CliProd {
    public int mes;
    public char epoca;
    public float preco;
    public int quantidade;
    public String produto;

    public CliProd() {
        this.preco = 0;
        this.quantidade = 0;
    }

    public CliProd(int mes, char epoca, float preco, int quantidade,String produto) {
        this.mes = mes;
        this.epoca = epoca;
        this.preco = preco;
        this.quantidade = quantidade;
        this.produto = produto;
    }

    public void addCliProd(Venda v) {
        this.epoca = v.getEpoca();
        this.mes = v.getMes();
        this.preco += v.getPreco();
        this.quantidade += v.getQuantidade();
    }
}
