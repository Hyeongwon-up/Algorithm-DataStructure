package com.company;

import java.security.spec.RSAOtherPrimeInfo;
import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N, M;

        N = in.nextInt();
        M = in.nextInt();

        int[] arr = new int[N];

        for(int i =0 ; i<5; i++) {
            arr[i] = in.nextInt();
        }

        System.out.println(solution(arr,N, M));
    }

    public static int solution(int[] arr,int N, int M) {
        int max = 0;
        int size = arr.length;
        int answer ;
        int temp = 0;

        for(int i = 0 ; i< N-2; i++) {
            for(int j = i+1; j <N-1; j++) {
                for(int z = j+1 ; z <N; z++) {

                    temp = arr[i] + arr[j] +arr[z];

                    if(temp >= max && temp <= M) {
                        max = temp;

                        System.out.println("현재 max = " + max);
                        System.out.println("현재 i = " + i);
                        System.out.println("현재 j = " + j);
                        System.out.println("현재 z = " + z);
                    }


                }
            }
        }


        answer=max;

        return answer;
    }
}
