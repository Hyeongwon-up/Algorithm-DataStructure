import java.util.Scanner;

public class main {


    public static void Hanoi(int num, int a, int b, int c) {

        if(num == 1) {
            System.out.println(a + c);
            return;
        }

        Hanoi(num-1,a,c,b);

        System.out.println(a+" "+c);

        Hanoi(num-1,b,a,c);

    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int k =

        Hanoi(k,1,2,3);











    }
}
