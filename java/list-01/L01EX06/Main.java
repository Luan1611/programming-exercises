import java.util.Scanner;
import java.math.BigDecimal;
import java.math.RoundingMode;
class Main {
    public static void main(String[] args){
        Scanner entry = new Scanner(System.in);
        double can_cost, height, width, can_yield, can_amount;
        width = entry.nextDouble();
        height = entry.nextDouble();
        can_cost = entry.nextDouble();
        can_yield = entry.nextDouble();
        can_amount = Math.ceil(width*height/can_yield);
        System.out.printf("%.0f %n", can_amount);
        System.out.print((new BigDecimal(can_amount * can_cost).setScale(2, RoundingMode.HALF_EVEN)));
    }
}