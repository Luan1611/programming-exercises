import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner year_entry = new Scanner(System.in);
        int year = year_entry.nextInt();
        if (year > 0) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )){
                System.out.println("Ano bissexto");
            } else {
                System.out.println("Ano nao bissexto");
            }
        }
        else{
            System.out.println("Erro");
        }
    }
}