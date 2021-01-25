import java.util.Scanner;

public class boj5086 {


    public static String find(int a, int b) {
        if(a>b && a/b >=1 && a%b==0) {
            return "multiple";
        }

        else if (a < b && b/a >=1 && b%a==0) {
               return "factor";

        }

        else return "neither";

    }


    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        while(true) {

            int first = input.nextInt();
            int second = input.nextInt();

            if(first ==0 && second == 0) {
                break;
            }

            System.out.println(find(first,second));


        }



    }
}
