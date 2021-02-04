package com.company;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class TEST {


    public static int solution1(int num) {

        int n,temp;
        n =0;
        temp = num;
        while(temp!=0) {
            n++;
            temp /= 10; // temp = temp / 10;
        }
        // 배열 생성
        Deque<Integer> deque = new ArrayDeque<>();
        int[] A= new int[n];
        // 각 자릿수를 분해하기
        temp = num;
        for(int i=A.length-1;i>=0;i--) {
            deque.push(temp%10);
            temp /= 10;
        }
        String answer ="";
        while (deque.isEmpty() == false) {
            answer += Integer.toString(deque.pollFirst());
            if(deque.peek()==null) break;
            answer += Integer.toString(deque.pollLast());
        }
        int answer2 = Integer.parseInt(answer);
        return answer2;


    }

    public static void main(String[] args) {
        long beforeTime = System.currentTimeMillis();

        Scanner in = new Scanner(System.in);

        int num = in.nextInt();

        System.out.println(solution1(num));



        long afterTime = System.currentTimeMillis(); // 코드 실행 후에 시간 받아오기
        long secDiffTime = (afterTime - beforeTime); //두 시간에 차 계산
        System.out.println("시간차이(m) : "+secDiffTime);


    }
}
