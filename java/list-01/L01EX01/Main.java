import java.util.Scanner;
class Main {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        int qtde = entrada.nextInt();
        if (qtde > 0) {
            double valorCriterioA = 0.25 * qtde + 7.5, valorCriterioB = 0.50 * qtde + 2.5;
            if (valorCriterioA < valorCriterioB) {
                System.out.println("Criterio A");
            }
            else if (valorCriterioB < valorCriterioA) {
                System.out.println("Criterio B");
            }
            else {
                System.out.println("Indiferente");
            }
        }
        else{
            System.out.println("Erro");
        }
    }
}