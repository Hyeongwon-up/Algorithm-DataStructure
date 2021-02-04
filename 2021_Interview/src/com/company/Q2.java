package com.company;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class Q2 {

    private static final int MAX = 100000000;

    public static Deque<Integer> MakeDeque(int num) {
        String input2 = Integer.toString(num);
        Deque<Integer> deque = new ArrayDeque<>();
        for(int i=0;i<input2.length();i++) {
            deque.add(input2.charAt(i) - '0');
        }
        return deque;
    }

    public static int solution(int num) {
        if(num < MAX) {
            Deque<Integer> TEMP = MakeDeque(num);
            String[] result = new String[TEMP.size()];
            String answer = "";
            while (TEMP.isEmpty() == false) {
                answer += Integer.toString(TEMP.pollFirst());
                if(TEMP.peek()==null) break;
                answer += Integer.toString(TEMP.pollLast());
            }
            int answer2 = Integer.parseInt(answer);
            return answer2;
        }

        else return -1;
    }


    public static void main(String[] args) {
        long beforeTime = System.currentTimeMillis();
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.println(solution(num));

        long afterTime = System.currentTimeMillis(); // 코드 실행 후에 시간 받아오기
        long secDiffTime = (afterTime - beforeTime); //두 시간에 차 계산
        System.out.println("시간차이(m) : "+secDiffTime);
    }
}
