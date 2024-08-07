import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int diasEmUmaSemana = 7;
        int somaTemperaturas = 0;
        int[] arrayTemperaturas = new int[diasEmUmaSemana];
        Scanner leitorTemperaturaDoDia = new Scanner(System.in);

        for (int quantidadeDias = 0; quantidadeDias < diasEmUmaSemana; quantidadeDias++){
            arrayTemperaturas[quantidadeDias] = leitorTemperaturaDoDia.nextInt();
            somaTemperaturas += arrayTemperaturas[quantidadeDias];
        }
        double temperaturaMediaSemanal = (double) somaTemperaturas/diasEmUmaSemana;
        int contadorDiasComTemperaturaAcimaDaMedia = 0;

        for (int temperaturaDoDia : arrayTemperaturas){
            if (temperaturaDoDia > temperaturaMediaSemanal){
                contadorDiasComTemperaturaAcimaDaMedia++;
            }
        }
        System.out.println(contadorDiasComTemperaturaAcimaDaMedia);
    }
}