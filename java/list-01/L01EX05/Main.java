import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner entry = new Scanner(System.in);
        int speed_limit, current_speed;
        double fixed_fine_value, total_fine_value, price_per_km_above_the_limit;
        speed_limit = entry.nextInt();
        fixed_fine_value = entry.nextDouble();
        price_per_km_above_the_limit = entry.nextDouble();
        current_speed = entry.nextInt();
        if (current_speed > speed_limit){
            total_fine_value = (current_speed - speed_limit) * price_per_km_above_the_limit + fixed_fine_value;
            System.out.printf("%.2f %n", (total_fine_value));
        }
        else{

            System.out.printf("0.00");
        }
    }
}