import java.io.IOException;
import java.util.List;

public class GestVendas {
    private Faturacao faturacao;
    private Filiais filiais;
    private CatalogoProdutos produtos;
    private CatalogoClientes clientes;
    private Leitor leitor;

    public GestVendas(Faturacao faturacao, Filiais filiais, CatalogoProdutos produtos, CatalogoClientes clientes, Leitor leitor) {
        this.faturacao = faturacao;
        this.filiais = filiais;
        this.produtos = produtos;
        this.clientes = clientes;
        this.leitor = leitor;
    }
    public GestVendas(Leitor leitor) {
        this.faturacao = new Faturacao();
        this.filiais = new Filiais();
        this.produtos = new CatalogoProdutos();
        this.clientes = new CatalogoClientes();
        this.leitor = leitor;
    }


    public Faturacao getFaturacao() {
        return faturacao;
    }

    public void setFaturacao(Faturacao faturacao) {
        this.faturacao = faturacao;
    }

    public Filiais getFiliais() {
        return filiais;
    }

    public void setFiliais(Filiais filiais) {
        this.filiais = filiais;
    }

    public CatalogoProdutos getProdutos() {
        return produtos;
    }

    public void setProdutos(CatalogoProdutos produtos) {
        this.produtos = produtos;
    }

    public CatalogoClientes getClientes() {
        return clientes;
    }

    public void setClientes(CatalogoClientes clientes) {
        this.clientes = clientes;
    }

    public Leitor getLeitor() {
        return leitor;
    }

    public void setLeitor(Leitor leitor) {
        this.leitor = leitor;
    }

    /////////////////////////////////////////////////////////

    public void carregaCatalogos() throws IOException {
        this.clientes.setClientes(leitor.leClientes());
        this.produtos.setProdutos(leitor.leProdutos());

        this.clientes.ordenaAlf();
        this.produtos.ordenaAlf();
    }

    public void carregaVendas() throws IOException {
        List<Venda> vendas = leitor.leVendas();

        for (Venda v : vendas) {
            this.faturacao.addVenda(v);
            this.filiais.addVenda(v);
        }
    }


    public void carregaDados() throws IOException {
        carregaCatalogos();
        carregaVendas();
    }
}
