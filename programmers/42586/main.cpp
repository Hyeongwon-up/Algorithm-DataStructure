#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    int lost_size = lost.size();
    int reserve_size = reserve.size();
    int result = 0;
    bool check[n+1];

    // 없는사람 체

    for(int i = 1 ; i<= n; i ++) {
        check[i]=true;
        for(int j = 0 ; j<lost_size; j++) {
            if(i ==  lost.at(j))
                check[i] = false;
        }

        cout << i << "번째 체크 : " << check[i]<< endl;
    }

    cout << " ***************" << endl;

    //빌려줄수있는지 확인

    for(int i = 1; i<=n; i++) {
        if(check[i]==false) {
            for(int j = 0; j<reserve_size;j++) {
                if((i-1) == reserve.at(j) || (i+1) == reserve.at(j)) {
                    check[i] == true;
                    reserve.erase(reserve.begin()+j);
                    reserve_size=reserve.size();
                }
            }
        }
        cout << i << "번째 체크 : " << check[i]<< endl;
    }

    for(int i = 1; i <= n;i++) {
        if(check[i]==true) answer++;
    }

    return answer;

}

int main() {
    int num = 5;
    vector<int> ex = {2,4};
    vector<int> speed = {1,3,5};



    cout <<  solution(num, ex, speed);



}