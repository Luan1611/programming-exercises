import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int numeroDePresentes = leitor.nextInt();
        int pesoASerAlocado = 0;
        int pesoTotalLadoX = 0;
        int pesoTotalLadoY = 0;
        int diferencaMaximaDePeso = 5;
        boolean trenoDesequilibrado  = false;
        for (int indicePresente = 0; indicePresente < numeroDePresentes; indicePresente++) {
            pesoASerAlocado = leitor.nextInt();
            if (indicePresente == 0 && pesoASerAlocado > 5){
                trenoDesequilibrado = true;
                break;
            }
            else{
                if (pesoASerAlocado + pesoTotalLadoX <= pesoTotalLadoY + diferencaMaximaDePeso){
                    pesoTotalLadoX += pesoASerAlocado;
                }
                else if (pesoASerAlocado + pesoTotalLadoY <= pesoTotalLadoX + diferencaMaximaDePeso){
                    pesoTotalLadoY += pesoASerAlocado;
                }
                else{
                    trenoDesequilibrado = true;
                    break;
                }
            }
        }
        if (trenoDesequilibrado == true){
            System.out.println("N");
        }
        else{
            System.out.println("S");
        }
    }
}