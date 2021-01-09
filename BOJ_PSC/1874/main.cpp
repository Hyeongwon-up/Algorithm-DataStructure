#include <iostream>
#define MAX 1000000;
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i= 0; i< n; i++) {
        cin >> arr[i];
    }

    for(int j = 0; j<n;j++) {
        int temp= MAX;
        int count = 0;
        for(int z = j+1; z<n; z++) {
            if(arr[j]<arr[z]) {
                if(z < temp)
                    temp = z;
                count ++;
            }

        }
        if(count == 0 ) cout << -1 <<" ";
        else  cout << arr[temp] << " ";
    }


}

