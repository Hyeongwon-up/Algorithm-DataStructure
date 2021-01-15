#include <iostream>
#include <stdlib.h>
using namespace std;


typedef struct _node {
    int data;
    _node * next;
}Node;


int main() {

    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL; //순회용 포인터
    Node * newNode = NULL;
    int readData;
    //input data

    while(1) {
        cout << "자연수 입력: " << endl;
        cin >> readData;


        if(readData < 1) break;

        //노드 추가.

        newNode = (Node*)malloc(sizeof(Node));

        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        }

        else
            tail->next = newNode;

        tail = newNode;
    }

    cout << "\n" ;

    if(head == NULL) {
        cout << "저장된 자연수 없다." ;
    }

    else {
        cur = head;
        cout << cur->data;

        while(cur->next != NULL) {
            cur = cur ->next;
            cout << cur->data;
        }


    }

    cout << "\n\n" ;

    //메모리의 해제
    if(head == NULL) {
        return 0;
    }
    else {
        Node * delNode = head;
        Node * delNextNode = head -> next;

        printf("%d를 삭제합니다.", head->data);
        free(delNode);

        while(delNextNode != NULL) {
            delNode = delNextNode;
            delNextNode = delNextNode->next;
            printf("%d를 삭제합니다.", delNode->data);
            free(delNode);
        }
    }


    return 0;
}
