#include <iostream>
using namespace  std;


int LinearSearch(int ar[], int a, int b) {

    for(int i = 0 ; i<a; i++) {
        if(ar[i]==b) {
            return b;
        }

    }
    return -1;
}



int main() {

    int arr[]={1,2,3,4,5,6,7,8,9};


    int FindNum;
    cin >> FindNum;

    int length = sizeof(arr)/sizeof(int);

    int result = LinearSearch(arr, length, FindNum);

    if(result == -1) {
        cout << "없습니다";
    }
    else
        cout << "찾았습니다." + result;



}
