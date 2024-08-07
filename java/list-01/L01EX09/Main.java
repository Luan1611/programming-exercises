import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        double qtdePessoas = 0, qtdePessoasIdosas = 0, somaIdades = 0, age;
        int condicaoParada = 1, qtdePessoasMaioresDeIdade = 0;
        Scanner entry = new Scanner(System.in);
        while (condicaoParada > 0){
            age = entry.nextDouble();
            if (age >= 0) {
                qtdePessoas++;
                somaIdades += age;
                if (age >= 18) {
                    qtdePessoasMaioresDeIdade++;
                    if (age > 75){
                        qtdePessoasIdosas++;
                    }
                }
            }
            else{
                condicaoParada = 0;
                entry.close();
            }
        }
        BigDecimal mediaIdades = (new BigDecimal(somaIdades/qtdePessoas).setScale(2, RoundingMode.HALF_EVEN));
        System.out.println(mediaIdades);
        System.out.println(qtdePessoasMaioresDeIdade);
        System.out.println((new BigDecimal((qtdePessoasIdosas/qtdePessoas * 100)).setScale(2, RoundingMode.HALF_EVEN)) + "%");
    }
}