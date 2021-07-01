public class Venda {
    private String produto;
    private float preco;
    private int quantidade;
    private char epoca;
    private String cliente;
    private int mes;
    private int filial;

    public Venda(String produto, float preco, int quantidade, char epoca, String cliente, int mes, int filial) {
        this.produto = produto;
        this.preco = preco;
        this.quantidade = quantidade;
        this.epoca = epoca;
        this.cliente = cliente;
        this.mes = mes;
        this.filial = filial;
    }

    public String getProduto() {
        return produto;
    }

    public void setProduto(String produto) {
        this.produto = produto;
    }

    public float getPreco() {
        return preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public char getEpoca() {
        return epoca;
    }

    public void setEpoca(char epoca) {
        this.epoca = epoca;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getFilial() {
        return filial;
    }

    public void setFilial(int filial) {
        this.filial = filial;
    }

}