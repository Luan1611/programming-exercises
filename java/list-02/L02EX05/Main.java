import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int idade = entrada.nextInt();
        int totalVelasColocadas = 0;
        double alturaVelaMaisAlta = 0;
        int contadorVelaMaisAlta = 0;
        while (idade > 0 && totalVelasColocadas < idade){
            double alturaVela = entrada.nextDouble();
            if (alturaVela > alturaVelaMaisAlta){
                alturaVelaMaisAlta = alturaVela;
                contadorVelaMaisAlta = 1;
            }
            else if (alturaVela == alturaVelaMaisAlta){
                contadorVelaMaisAlta++;
            }
            totalVelasColocadas++;
        }
        System.out.print(contadorVelaMaisAlta);
    }
}
