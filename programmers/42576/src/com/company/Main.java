package com.company;

import java.util.Stack;

public class Main {

    public static String solution(String[] participant, String[] completion) {
        int  Psize = participant.length;
        int Csize = completion.length;
        Stack<String> result = new Stack<>();

        for(int i = 0; i <Psize; i++) {
            result.push(participant[i]);
            for(int j = 0 ; j<Csize; j++) {
                if(participant[i]== completion[j]) {
                    result.pop();
                }
            }
        }
        String answer = result.peek();
        return answer;
    }


    public static void main(String[] args) {


      String[] test =new String[]{"marina", "josipa", "nikola", "vinko", "filipa"};

      String[] result = new  String[]{"marina", "josipa", "nikola", "filipa"};


      System.out.println( solution(test, result));

    }
}
