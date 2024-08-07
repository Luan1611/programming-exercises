import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner entry = new Scanner(System.in);
        int money, unit_price, packages_number, total;
        money = entry.nextInt();
        unit_price = entry.nextInt();
        packages_number = entry.nextInt();
        total = ((money / unit_price) + ((money / unit_price) / packages_number));
        System.out.println(total);
        }
}
