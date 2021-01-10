#include <iostream>
#include <deque>
#define MAX 9999

using namespace std;

int main() {
    int NUM;
    cin >> NUM;
    deque<int> dq;

     string cmd;


  while(NUM--) {
        cin >> cmd;
        int temp=0;

        if(cmd=="push_front"){
            cin >> temp;

            dq.push_front(temp);
        }

        if(cmd=="push_back"){
            cin >> temp;
            dq.push_back(temp);
        }

        if(cmd=="pop_front"){
            if(dq.empty()==true) {
                cout << -1 << endl;
            }
            else{cout << dq.front() << endl;
                 dq.pop_front();
            }
        }
        if(cmd=="pop_back"){
            if(dq.empty()==true) {
                cout << -1 << endl;
            }
            else {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }

        if(cmd=="size"){
            cout << dq.size() << endl;
        }
        if(cmd=="empty"){
            if(dq.empty()==true) {
                cout << 1 << endl;
            }

            else cout << 0 << endl;
        }
        if(cmd=="front"){
            if(dq.empty()==true) {
                cout << -1 << endl;
            }

            else cout << dq.front() << endl;

        }
        if(cmd=="back"){
            if(dq.empty()==true) {
                cout << -1 << endl;
            }

            else cout << dq.back() << endl;

        }

    }
    return 0;
}
