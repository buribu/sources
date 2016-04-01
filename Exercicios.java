
import java.util.Scanner;

/**
 *
 * @author Profess
 */
public class Exercicios {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
               
        int nota1, nota2, media;
        System.out.print("Informe a primeira Nota");
        Scanner entrada = new Scanner(System.in);
        nota1 = entrada.nextInt();
        System.out.print("Informe a segunda Nota");
        nota2 = entrada.nextInt();
        media = (nota1 + nota2)/2;
        if(media >= 6){
        System.out.print("Aprovado");
        }
        else{
        System.out.print("Reprovado");
        }
        }
    }   

