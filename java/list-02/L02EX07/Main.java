import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int larguraPagina = leitor.nextInt();
        int alturaPagina = leitor.nextInt();
        int larguraFotoA = leitor.nextInt();
        int alturaFotoA = leitor.nextInt();
        int larguraFotoB = leitor.nextInt();
        int alturaFotoB = leitor.nextInt();
        if (((alturaFotoA + larguraFotoB <= alturaPagina) && (larguraFotoA <= larguraPagina && alturaFotoB <= larguraPagina)) ||
        ((alturaFotoA + larguraFotoB <= larguraPagina) && (larguraFotoA <= alturaPagina && alturaFotoB <= alturaPagina)) ||
        ((larguraFotoA + alturaFotoB <= alturaPagina) && (alturaFotoA <= larguraPagina && larguraFotoB <= larguraPagina)) ||
        ((larguraFotoA + alturaFotoB <= larguraPagina) && (alturaFotoA <= alturaPagina && larguraFotoB <= alturaPagina)) ||
        ((alturaFotoA + alturaFotoB <= alturaPagina) && (larguraFotoA <= larguraPagina && larguraFotoB <= larguraPagina)) ||
        ((alturaFotoA + alturaFotoB <= larguraPagina) && (larguraFotoA <= alturaPagina && larguraFotoB <= alturaPagina)) ||
        ((larguraFotoA + larguraFotoB <= alturaPagina) && (alturaFotoA <= larguraPagina && alturaFotoB <= larguraPagina)) ||
        ((larguraFotoA + larguraFotoB <= larguraPagina) && (alturaFotoA <= alturaPagina && alturaFotoB <= alturaPagina))){
            System.out.println("S");
        }
        else{
            System.out.println("N");
        }
    }
}