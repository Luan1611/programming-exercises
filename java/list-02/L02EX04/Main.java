import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner leitorEstadoLampada = new Scanner(System.in);
        int IA = leitorEstadoLampada.nextInt();
        int IB = leitorEstadoLampada.nextInt();
        int FA = leitorEstadoLampada.nextInt();
        int FB = leitorEstadoLampada.nextInt();
        if (IA == FA && IB == FB){
            System.out.println(0);
        }
        else if (IA != FA){
            System.out.println(1);
        }
        else{
            System.out.println(2);
        }
    }
}