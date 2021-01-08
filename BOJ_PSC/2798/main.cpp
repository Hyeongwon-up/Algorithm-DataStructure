//
//  main.cpp
//  ㅁㅁ
//
//  Created by 이형원 on 2020/09/10.
//  Copyright © 2020 이형원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int arr[101];
vector<int> v;
int main() {

    int N, M,max;
    int sum=0;

    cin >> N >> M ;
    for(int i=0; i<N; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i< N-2; i++) {
        for(int j =1; i+j<N-1; j++) {
            for(int k = 1; i+j+k<N; k++) {

                sum = arr[i] + arr[i+j]+ arr[i+j+k];
                if( sum <= M) {
                    v.push_back(sum);




                }
            }
        }
    }


    max = *max_element(v.begin(), v.end());

    printf("%d", max);


}






