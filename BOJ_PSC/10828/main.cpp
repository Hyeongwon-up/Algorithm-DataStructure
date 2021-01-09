#include <iostream>
#include <stack>
using namespace  std;

int main() {
    int N,num, temp;
    stack<int> st;

    cin >> N;

    string command;

    for(int i = 0; i<N; i++) {

        cin >> command;


        if(command == "push") {
            cin >> num;
            st.push(num);
        }

        else if(command == "pop" ) {

            if(st.empty() == true) {
                cout << -1 << endl;
            }
            else{
                cout << st.top()<< endl;
                st.pop();}
        }

        else if(command == "size" ) {
            cout << st.size() << endl;
        }

        else if(command == "empty") {
            if(st.empty() == true) cout << 1<< endl;
            else cout << 0 << endl;

        }
        else if(command == "top" ) {
            if(st.empty() == true) cout << -1<< endl;
            else cout << st.top()<< endl;

        }

    }

}
