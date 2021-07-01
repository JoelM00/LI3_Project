import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
        List<Cliente> clientes = new ArrayList<>();
        List<Produto> produtos = new ArrayList<>();
        Leitor l = new Leitor(produtos,clientes);



        l.leClientes("./dados/Clientes.txt");


    }
}
