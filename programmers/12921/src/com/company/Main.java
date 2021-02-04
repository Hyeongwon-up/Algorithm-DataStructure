package com.company;

public class Main {


    public static int solution(int n) {

        int answer = 0;


        for(int i = 2 ; i <=n; i++) {
            int temp = 0;
            for(int j = 1 ; j <=i ; j++) {

                if((i%j)==0) temp++;

            }

            if(temp == 2) answer++;
        }



        return answer;
    }


    public static void main(String[] args) {
	    int num = 5;

        System.out.println(solution(num));


    }
}
