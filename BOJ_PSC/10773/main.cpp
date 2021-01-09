//
// Created by 이형원 on 2021/01/10.
//

#include <iostream>
#include <stack>

using namespace std;

stack<int> st;

void solve (int a ) {
    if(a == 0) {
        st.pop();
    }

    else st.push(a);
}


int main() {
    int k ;

    cin >> k;
    int command;
    for(int i = 0; i<k ; i++) {
        cin >> command;
        solve(command);

    }

    int result = 0;


    while(st.empty() == false ) {
        result += st.top();
        st.pop();
    }

    cout << result;
}
