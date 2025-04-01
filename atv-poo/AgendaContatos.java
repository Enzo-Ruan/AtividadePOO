import java.util.Scanner;

class Contato {
    private String nome;
    private String telefone;

    public Contato(String nome, String telefone) {
        this.nome = nome;
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public void exibirContato() {
        System.out.println("Nome: " + nome + ", Telefone: " + telefone);
    }
}

public class AgendaContatos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Contato[] contatos = new Contato[3];

        for (int i = 0; i < 3; i++) {
            System.out.println("Digite o nome do contato " + (i + 1) + ": ");
            String nome = scanner.nextLine();
            System.out.println("Digite o telefone do contato " + (i + 1) + ": ");
            String telefone = scanner.nextLine();
            contatos[i] = new Contato(nome, telefone);
        }

        System.out.println("\nContatos cadastrados:");
        for (Contato contato : contatos) {
            contato.exibirContato();
        }
        
        scanner.close();
    }
}
