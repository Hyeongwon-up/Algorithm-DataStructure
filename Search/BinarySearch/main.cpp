#include <iostream>
using namespace  std;


int BinarySearch(int ar[], int a, int b) {

    int head = 0;
    //a = 9;
    int tail = a-1;

    while(head <= tail) {

        int mid = (head+tail)/2; //4

        if(b == ar[mid]) {
            return mid;
        }

        else{
            if(b < ar[mid]) {
                tail = mid-1 ; //3
            }

            else
                head = mid+1; //5
        }
    }

    return -1;

}



int main() {

    int arr[]={1,2,3,4,5,6,7,8,9};


    int FindNum;
    cin >> FindNum;

    int length = sizeof(arr)/sizeof(int);

    int result = BinarySearch(arr, length, FindNum);

    if(result == -1) {
        cout << "없습니다";
    }
    else
        cout << "찾았습니다." + result;



}