import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int X1, X2, V1, V2;
        Scanner leituraDado = new Scanner(System.in);
        X1 = leituraDado.nextInt();
        V1 = leituraDado.nextInt();
        X2 = leituraDado.nextInt();
        V2 = leituraDado.nextInt();
        if (V1 > 0 && V2 > 0){
            if ((X1 < X2 && V1 > V2) || (X2 < X1 && V2 > V1) || (X1 == X2 && V1 == V2)) {
                System.out.print("SIM");
            } else {
                System.out.print("NAO");
            }
        }
        else if (V1 < 0 && V2 < 0){
            if ((X1 < X2 && V1 < V2) || (X2 < X1 && V2 < V1) || (X1 == X2 && V1 == V2)){
                System.out.print("SIM");
            }
            else{
                System.out.print("NAO");
            }
        }
        else if (V1 == 0 && V2 != 0){
            if (V2 > 0) {
                if (X2 < X1) {
                    System.out.print("SIM");
                }
                else{
                    System.out.println("NAO");
                }
            }
            else{
                if (X2 > X1) {
                    System.out.print("SIM");
                }
                else{
                    System.out.println("NAO");
                }
            }

        }
        else if (V2 == 0 && V1 != 0){
            if (V1 > 0) {
                if (X1 < X2) {
                    System.out.print("SIM");
                }
                else{
                    System.out.println("NAO");
                }
            }
            else{
                if (X1 > X2) {
                    System.out.print("SIM");
                }
                else{
                    System.out.println("NAO");
                }
            }

        }
        else if (((V1 > 0 && V2 < 0) && (X1 < X2)) || ((V2 > 0 && V1 < 0) && (X2 < X1))){
            System.out.println("SIM");
        }
        else{
            System.out.println("NAO");
        }
    }
}