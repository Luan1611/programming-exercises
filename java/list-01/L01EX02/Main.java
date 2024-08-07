import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        int a = entrada.nextInt(), b = entrada.nextInt(), c = entrada.nextInt();
        if (a > 0 && b > 0 && c > 0){
            if ((a < b + c) && (b < a + c) && (c < a + b) && (a == b) && (a == c)) {
                System.out.println("Equilatero");
            }
            else if ((a < b + c) && (b < a + c) && (c < a + b) && ((a == b || a == c) && ((a != c) || (a != b)))){
                System.out.println("Isosceles");
            }
            else if ((a < b + c) && (b < a + c) && (c < a + b)){
                System.out.println("Escaleno");
            }
            else{
                System.out.println("Nao forma triangulo");
            }
        }
        else{
            System.out.println("Erro");
        }
    }
}