import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner entry = new Scanner(System.in);
        int cents_reference, number_of_lemons, soma = 0, num = 0, numeroParcelas = 0;
        number_of_lemons = entry.nextInt();
        cents_reference = entry.nextInt();
        int termo = cents_reference;
        while(numeroParcelas < number_of_lemons) {
            if (num < cents_reference) {
                termo = (cents_reference - num);
                soma += termo;
                num += 1;
                numeroParcelas += 1;
            }
            else {
                soma += 1;
                numeroParcelas += 1;
            }
        }
        System.out.println(soma);
    }
}
