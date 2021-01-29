import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class test {



    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int num = input.nextInt();
        String[][] arr = new String[num][2];

        for(int i =0; i< num; i++) {
            arr[i][0] = input.next();
            arr[i][1] = input.next();
        }


        Arrays.sort(arr, new Comparator<String[]>() {
            @Override
            public int compare(String[] o1, String[] o2) {
                return Integer.parseInt(o1[0]) - Integer.parseInt(o2[0]);
            }
        });

        for(int i =0 ; i<num; i++) {
            System.out.println(arr[i][0]+ " "+arr[i][1]);
        }





    }
}
