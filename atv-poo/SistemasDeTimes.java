import java.util.ArrayList;

class Jogador {
    String nome;
    int idade;
    String posicao;

    Jogador(String nome, int idade, String posicao) {
        this.nome = nome;
        this.idade = idade;
        this.posicao = posicao;
    }
}

class Premiacao {
    String titulo;
    int ano;

    Premiacao(String titulo, int ano) {
        this.titulo = titulo;
        this.ano = ano;
    }
}

class TimeDeFutebol {
    String nome;
    ArrayList<Jogador> jogadores;
    ArrayList<Premiacao> premiacoes;

    TimeDeFutebol(String nome) {
        this.nome = nome;
        this.jogadores = new ArrayList<>();
        this.premiacoes = new ArrayList<>();
    }

    void adicionarJogador(Jogador jogador) {
        jogadores.add(jogador);
    }

    void adicionarPremiacao(Premiacao premiacao) {
        premiacoes.add(premiacao);
    }

    void listarJogadores() {
        System.out.println("Jogadores do " + nome + ":");
        for (Jogador j : jogadores) {
            System.out.println(" - " + j.nome + " (" + j.posicao + ", " + j.idade + " anos)");
        }
    }

    void listarPremiacoes() {
        System.out.println("Títulos do " + nome + ":");
        for (Premiacao p : premiacoes) {
            System.out.println(" - " + p.titulo + " (" + p.ano + ")");
        }
    }
}

public class SistemaDeTimes {
    public static void main(String[] args) {
        TimeDeFutebol time = new TimeDeFutebol("Flamengo");
        
        time.adicionarJogador(new Jogador("Gabigol", 27, "Atacante"));
        time.adicionarJogador(new Jogador("Arrascaeta", 30, "Meia"));
        
        time.adicionarPremiacao(new Premiacao("Libertadores", 2019));
        time.adicionarPremiacao(new Premiacao("Brasileirão", 2020));
        
        time.listarJogadores();
        time.listarPremiacoes();
    }
}
