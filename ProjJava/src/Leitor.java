import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;
import java.util.Map;

public class Leitor {
    private List<Produto> produtos;
    private List<Cliente> clientes;

    public Leitor(List<Produto> produtos, List<Cliente> clientes) {
        this.produtos = produtos;
        this.clientes = clientes;
    }

    public List<Produto> getProdutos() {
        return produtos;
    }

    public void setProdutos(List<Produto> produtos) {
        this.produtos = produtos;
    }

    public List<Cliente> getClientes() {
        return clientes;
    }

    public void setClientes(List<Cliente> clientes) {
        this.clientes = clientes;
    }

    //////////////////////////////////////////////

    public void leClientes(String ficheiro) throws IOException {
        FileInputStream stream = new FileInputStream(ficheiro);
        InputStreamReader reader = new InputStreamReader(stream);
        BufferedReader br = new BufferedReader(reader);
        String linha = br.readLine();
        while(linha != null) {
            System.out.println("Cliente: "+linha);
            linha = br.readLine();
        }
    }

}
