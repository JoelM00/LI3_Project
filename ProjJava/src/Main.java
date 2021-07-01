import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        Leitor l = new Leitor("./dados/Clientes.txt","./dados/Produtos.txt","./dados/Vendas_1M.txt");
        GestVendas g = new GestVendas(l);

        g.carregaDados();

    }
}
