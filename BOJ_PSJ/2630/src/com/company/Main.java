package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here

        Scanner in = new Scanner(System.in);

        int num = in.nextInt();

        int[][] input = new int[num][num];
        boolean[][] check = new boolean[num][num];

        for(int i = 0 ; i < num ; i ++) {
            for(int j = 0 ; j < num ; j++) {

                input[i][j] = in.nextInt();
                check[i][j] = false;
            }
        }

        solution(num,0,0);
        
    }

    public static void solution(int n, int front , int rear ) {



    }

    private static boolean findSameColor(int n, int front, int rear) {
        int tmp = input[front][rear];
        for(int i=front; i<front+n; ++i){
            for(int j=rear; j<rear+n; ++j){
                if(tmp == map[i][j]) tmp = map[i][j];
                else return false;
            }
        }

        return true;
    }
}
