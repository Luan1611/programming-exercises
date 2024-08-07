import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        int quantidadePosicoesVetores = 5;
        int indiceVetor;
        int[] vetorA = new int[quantidadePosicoesVetores];
        int[] vetorB = new int[quantidadePosicoesVetores];
        long[] vetorC = new long[quantidadePosicoesVetores];
        Scanner leitor = new Scanner(System.in);

        for (indiceVetor = 0; indiceVetor < quantidadePosicoesVetores; indiceVetor++){
            int elementoVetorA = leitor.nextInt();
            vetorA[indiceVetor] = elementoVetorA;
            vetorC[indiceVetor] += elementoVetorA;
        }

        int indiceArray;
        boolean ultrapassouLimiteInt = false;

        for (indiceArray = 0; indiceArray < quantidadePosicoesVetores; indiceArray++){
            int elementoVetorB = leitor.nextInt();
            long testadorSoma = (long) elementoVetorB + vetorC[indiceArray];
            vetorB[indiceArray] = elementoVetorB;
            if (testadorSoma > 2147483647 || testadorSoma < -2147483648){
                ultrapassouLimiteInt = true;
                break;
            }
            else{
                vetorC[indiceArray] += elementoVetorB;
            }

        }

        if (!ultrapassouLimiteInt) {
            int indiceElementoVetorC;

            for (indiceElementoVetorC = 0; indiceElementoVetorC < quantidadePosicoesVetores; indiceElementoVetorC++) {
                if (indiceElementoVetorC < quantidadePosicoesVetores - 1) {
                    System.out.print(vetorC[indiceElementoVetorC] + ", ");
                } else {
                    System.out.printf(String.valueOf(vetorC[indiceElementoVetorC]));
                }
            }
        }
        else{
            System.out.println("Erro");
        }
    }
}
