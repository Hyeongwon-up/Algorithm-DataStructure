#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main() {

    int T;
    string cmd;

    stack<int> st;


    cin >> T;

    char solve[100000];

    while(T--) {


        cin >> cmd;
        int i = 0;
        int arr[100];
        int length = sizeof(cmd)/sizeof(string);

        for(string::iterator iter = cmd.begin(); iter != cmd.end(); ++iter) {
            arr[i] = *iter;
        }

        cin







    }



}
