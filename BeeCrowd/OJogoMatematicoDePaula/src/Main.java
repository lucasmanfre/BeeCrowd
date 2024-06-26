import java.io.IOException;
import java.util.Scanner;

// Paula simplesmente adora matemática. Seu maior passatempo é ficar inventando jogos ou atividades que a envolvam para brincar com seus amiguinhos. Obviamente, nem todos eles não são tão apaixonados assim por matemática e têm muita dificuldade para resolver as brincadeiras propostas por ela. Agora Paula inventou um pequeno passatempo que envolve 3 caracteres: um dígito numérico, uma letra e outro dígito numérico.

// Se a letra for maiúscula, deve-se subtrair o primeiro dígito do segundo. Se a letra for minúscula, deve-se somar ambos os dígitos e se os DÍGITOS forem iguais, deve-se desconsiderar a letra e mostrar o produto entre os dois dígitos. Ela pediu para seu amigo Marcelo, que é bom em programação, para criar um programa para que encontre a solução para cada uma das sequências que Paula lhe apresentar.

// Entrada
// A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N, indicando o número de casos de teste que virão a seguir. Cada caso de teste é uma sequência de três caracteres criada por Paula. Esta sequência contém na primeira posição um caractere de '0' a '9', na segunda posição uma letra maiúscula ou minúscula do alfabeto e na terceira posição outro caractere de '0' a '9'.

// Saída
// Para cada caso de teste, deve ser impressa uma linha com um valor inteiro que representa a solução da sequência proposta por Paula.

public class Main {

    public static Scanner leitor = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        int a, b, d, resultado;
        char c, outroC;
        String texto;

        a = leitor.nextInt();
        leitor.nextLine();

        for (int i = 0; i < a; i++) {
            resultado = 0;
            texto = leitor.nextLine();
            b = Character.getNumericValue(texto.charAt(0));
            c = texto.charAt(1);
            d = Character.getNumericValue(texto.charAt(2));
            outroC = Character.toUpperCase(c);
            if (c == outroC && b != d) {
                resultado = d - b;
            } else if (b == d) {
                resultado = b * d;
            } else {
                resultado = b + d;
            }

            System.out.println(resultado);
        }
    }

}