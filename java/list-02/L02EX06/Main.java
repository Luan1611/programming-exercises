import java.sql.Array;
import java.util.Arrays;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int tamanhoVetoresOrigemNumeros = entrada.nextInt(), indiceElemento, tamanhoVetorC = tamanhoVetoresOrigemNumeros * 2;
        int[] vetorC = new int[tamanhoVetorC];
        for (indiceElemento = 0; indiceElemento < tamanhoVetorC; indiceElemento += 2){
            int elementoOriginarioDoVetorA = entrada.nextInt();
            vetorC[indiceElemento] = elementoOriginarioDoVetorA;
        }
        for (indiceElemento = 1; indiceElemento < tamanhoVetorC; indiceElemento += 2){
            int elementoOriginarioDoVetorB = entrada.nextInt();
            vetorC[indiceElemento] = elementoOriginarioDoVetorB;
        }
        for (int i = 0; i < tamanhoVetorC; i++){
            System.out.print(vetorC[i] + " ");
        }
    }
}
