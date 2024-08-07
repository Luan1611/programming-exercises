import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner entry = new Scanner(System.in);
        double distance_reference, first_value, second_value, distance;
        distance_reference = entry.nextDouble();
        first_value = entry.nextDouble();
        second_value = entry.nextDouble();
        distance = entry.nextDouble();
        BigDecimal first_result = new BigDecimal(first_value * distance).setScale(2, RoundingMode.HALF_EVEN),
                second_result = new BigDecimal(second_value * distance).setScale(2, RoundingMode.HALF_EVEN);
        if (distance <= distance_reference){
            System.out.print(first_result);
        }
        else{
            System.out.print(second_result);
        }
    }
}
