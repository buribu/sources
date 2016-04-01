package quadradomagico;

import java.util.Scanner;

public class QuadradoMagico {

    public static void main(String[] args) {
        int m[][] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, i, j, valor;
        Scanner entrada = new Scanner(System.in);
        for (int cont = 0; cont < 9; cont++) {
            i = 0;
            j = 0;
            valor = 0;
            System.out.println();
            while ((i < 0 || i > 2) || (j < 0 || j > 2) || (valor < 1 || valor > 9)) {
                System.out.println("Informe a linha");
                i = entrada.nextInt();
                System.out.println("Informe a coluna");
                j = entrada.nextInt();
                System.out.println("Informe o Valor");
                valor = entrada.nextInt();
                if ((i < 0 || i > 2) || (j < 0 || j > 2) || (valor < 1 || valor > 9) 
                        || m[i][j] > 0) {
                    System.out.println("Informe novamente os valores!");
                    valor = 0;
                }
            }
            m[i][j] = valor;
            for (i = 0; i < 3; i++) {
                System.out.print("\n");
                for (j = 0; j < 3; j++) {
                    System.out.print(m[i][j]);
                    System.out.print("\t");
                }
            }
            if (cont == 8) {
                int v[] = new int[6];
                v[0] = m[0][0] + m[0][1] + m[0][2];
                v[1] = m[1][0] + m[1][1] + m[1][2];
                v[2] = m[2][0] + m[2][1] + m[2][2];
                v[3] = m[0][0] + m[1][0] + m[2][0];
                v[4] = m[0][1] + m[1][1] + m[2][1];
                v[5] = m[0][2] + m[1][2] + m[2][2];
                int total = 0;
                for (i = 0; i < 6; i++) {
                    if (v[i] == 15) {
                        total++;
                    }
                }
                if (total == 6) {
                    System.out.println("Você ganhou");
                } else {
                    System.out.println("Tente Novamente");
                    System.exit(0);
                }
            }
        }
    }
}
