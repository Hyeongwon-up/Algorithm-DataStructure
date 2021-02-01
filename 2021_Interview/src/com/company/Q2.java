package com.company;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class Q2 {

    private static int MAX = 100000000;

    public static Deque<Integer> MakeDeque(int num) {

        String input2 = Integer.toString(num);
        Deque<Integer> stack = new ArrayDeque<>();
        for(int i=0;i<input2.length();i++) {
            stack.add(input2.charAt(i) - '0'); // i=0 일때, '1' - '0' = 1 이됨.
        }
        System.out.println(stack);
        return stack;
    }

    public static int solution(int num) {
        System.out.println("함수호출");


        if(num < MAX) {
            System.out.println("success");
            Deque<Integer> TEMP = MakeDeque(num);
            String[] result = new String[TEMP.size()];
            String answer = "";
            int index =0 ;

            while (TEMP.isEmpty() == false) {
                answer += Integer.toString(TEMP.pollFirst());
                answer += Integer.toString(TEMP.pollLast());
            }


            int answer2 = Integer.parseInt(answer);
            System.out.println(answer2);
            return answer2;
        }


        else return -1;
    }


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();


        System.out.println(solution(num));

    }
}
