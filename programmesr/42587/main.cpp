#include <string>
#include <vector>
#include <iostream>
#include <stack>


using namespace std;


int main() {
    vector<int> a = {2,1,3,2};

    int size = a.size();
    vector<string> st[size];
    int temp;
    for(int i = 0 ; i < size; i++) {
        temp = a.at(i);
        st->push_back(to_string(temp));

    }
    string ex[size];
    string im;
    string temp2;
    for(int j =0 ; j <size; j++) {
        for(int z = 0 ; j<size; j++) {
            im += st->at(z);

        }



        ex[j] = im;





    }



    cout << ex[0];



}