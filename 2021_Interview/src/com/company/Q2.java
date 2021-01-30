package com.company;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;
import java.util.Stack;

public class Q2 {



    public static Deque<Integer> MakeDeque(int num) {
        String input2 = Integer.toString(num);
        Deque<Integer> stack = new ArrayDeque<>();
        for(int i=0;i<input2.length();i++) {
            stack.add(input2.charAt(i) - '0'); // i=0 일때, '1' - '0' = 1 이됨.
        }
        System.out.println(stack);
        return stack;
    }

    public static void solution(int num) {
        Deque<Integer> TEMP = MakeDeque(num);
        while(TEMP.isEmpty()==false) {
            System.out.println(TEMP.peekFirst());
            TEMP.removeFirst();
            System.out.println(TEMP.peekLast());
            TEMP.removeLast();
        }
    }


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();

        solution(num);

    }
}
