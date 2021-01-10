#include <iostream>
#include <queue>
using namespace  std;

int main() {
    int N,num;
    queue<int> Q;

    cin >> N;

    string command;

    for(int i = 0; i<N; i++) {

        cin >> command;


        if(command == "push") {
            cin >> num;
            Q.push(num);
        }

        else if(command == "pop" ) {

            if(Q.empty() == true) {
                cout << -1 << endl;
            }
            else{


                cout << Q.front() << endl;
                Q.pop();
            }
        }

       else if(command == "size" ) {
            cout << Q.size() << endl;
        }

       else if(command == "empty") {
            if(Q.empty() == true) cout << 1<< endl;
            else cout << 0 << endl;
        }

       else if(command == "back" ) {
            if(Q.empty() == true) cout << -1<< endl;
            else cout << Q.back()<< endl;

        }

       else if(command == "front" ) {
            if(Q.empty() == true) cout << -1<< endl;
            else cout << Q.front()<< endl;

        }

    }

}
