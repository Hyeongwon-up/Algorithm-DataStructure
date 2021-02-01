package com.company;

import java.util.Scanner;
import java.util.Stack;

public class Q1 {

    public static Stack<Character> solution(String s) {
        char[] input = s.toCharArray();
        Stack<Character> stack = new Stack<Character>();

        for(int i = 0 ; i < input.length ; i++) {
            if(!stack.empty()) {

                switch (stack.peek()) {
                    case 'A':
                        if (input[i] == 'B') stack.pop();
                        else stack.push(input[i]);
                        break;

                    case 'B':
                        if (input[i] == 'A') stack.pop();
                        else stack.push(input[i]);
                        break;

                    case 'C':
                        if (input[i] == 'D') stack.pop();
                        else stack.push(input[i]);
                        break;

                    case 'D':
                        if (input[i] == 'C') stack.pop();
                        else stack.push(input[i]);
                        break;
                }
            }
            else {
                stack.push(input[i]);
            }
        }

        return stack;

    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String ex = in.next();


        System.out.println(solution(ex));

    }
}
