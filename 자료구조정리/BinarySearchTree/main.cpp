#include <iostream>

using namespace std;

int numbers = 10;

typedef struct node *nodePointer;//구조체 포인터?


typedef struct node{ //typedef를 이용하면 구조체 변수를 선언할 떄마다 struct 를 붙이는 것을 생략할 수 있다.--> 자료형의 별칭을 만드는 기
    int data;
    nodePointer left, right;
}node; //구조체 별칭 선언

//전위순회


int main() {
    node TEST[11];

    for(int i = 1 ; i<=numbers ; i++) {
        TEST[i].data = i;
        TEST[i].left = NULL;
        TEST[i].right = NULL;
    }

    for(int i = 2; i<=numbers ; i++) {
        if (i % 2 == 0) { // 짝수라면
            TEST[i/2].left = &TEST[i];
        }
        else { //홀수라면
            TEST[i/2].right = &TEST[i];
        }
    }

    cout << TEST[3].left->data <<endl;
}
