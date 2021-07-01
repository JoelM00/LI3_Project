import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Leitor {
    private String fileClientes;
    private String fileProdutos;
    private String fileVendas;

    public Leitor(String fileClientes, String fileProdutos, String fileVendas) {
        this.fileClientes = fileClientes;
        this.fileProdutos = fileProdutos;
        this.fileVendas = fileVendas;
    }

    public String getFileClientes() {
        return fileClientes;
    }

    public void setFileClientes(String fileClientes) {
        this.fileClientes = fileClientes;
    }

    public String getFileProdutos() {
        return fileProdutos;
    }

    public void setFileProdutos(String fileProdutos) {
        this.fileProdutos = fileProdutos;
    }

    public String getFileVendas() {
        return fileVendas;
    }

    public void setFileVendas(String fileVendas) {
        this.fileVendas = fileVendas;
    }

//////////////////////////////////////////////

    public List<Cliente> leClientes() throws IOException {
        FileInputStream stream = new FileInputStream(this.fileClientes);
        InputStreamReader reader = new InputStreamReader(stream);
        BufferedReader br = new BufferedReader(reader);
        List<Cliente> clientes = new ArrayList<>();

        String linha = br.readLine();
        while(linha != null) {
            clientes.add(new Cliente(linha));
            linha = br.readLine();
        }
        return clientes;
    }

    public List<Produto> leProdutos() throws IOException {
        FileInputStream stream = new FileInputStream(this.fileProdutos);
        InputStreamReader reader = new InputStreamReader(stream);
        BufferedReader br = new BufferedReader(reader);
        List<Produto> produtos = new ArrayList<>();

        String linha = br.readLine();
        while(linha != null) {
            produtos.add(new Produto(linha));
            linha = br.readLine();
        }
        return produtos;
    }

    public List<Venda> leVendas() throws IOException {
        FileInputStream stream = new FileInputStream(this.fileVendas);
        InputStreamReader reader = new InputStreamReader(stream);
        BufferedReader br = new BufferedReader(reader);
        List<Venda> vendas = new ArrayList<>();

        String linha = br.readLine();
        while(linha != null) {
            vendas.add(new Venda(linha));
            linha = br.readLine();
        }
        return vendas;
    }

}
