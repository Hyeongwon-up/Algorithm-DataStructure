#include <iostream>
using namespace std;

int Fibo(int a) {
    if(a == 1) {
        return 0;
    }

    else if(a == 2) {
        return 1;
    }

    else

        return Fibo(a-1) + Fibo(a-2);
}

int main() {
    int num;
    cin >> num;


    for(int i = 1; i<=num; i++) {
        cout << Fibo(i)<< " ";
    }

    cout << "\n" << Fibo(num);

}
