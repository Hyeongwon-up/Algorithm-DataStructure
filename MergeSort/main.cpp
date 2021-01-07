#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];

void msort(int list[], int l, int m, int r)
{
    int i, j, k;
    i = l;
    j = m + 1;
    k = l;
    int temp[100000];
    //왼쪽에서 정렬된 배열과 오른쪽에서 정렬된 배열을 합침
    //둘중 하나가 끝까지 올때 까지 합침
    while (i <= m && j <= r) //처음이 중간보다 작고, 마지막이 중간+1보다 큰경우
    {
        if (list[i] <= list[j])
            temp[k++] = list[i++];
        else
            temp[k++] = list[j++];
    }
    //오른쪽 배열에 임시 배열로 추가할 수가 남았으면 오른쪽 배열을 임시 배열로 복사
    if (i > m)
    {
        for (int x = j; x <= r; x++)
            temp[k++] = list[x];
    }
        //왼쪽 배열에 임시 배열로 추가할 수가 남았으면 왼쪽 배열을 임시 배열로 복사
    else
    {
        for (int x = i; x <= m; x++)
            temp[k++] = list[x];
    }

    //본 배열으로 복귀
    for (int x = l; x <= r; x++)
        list[x] = temp[x];
}


void merge(int list[], int head, int tail) {

    if(head < tail) {
        int k = (head+tail)/2;

        merge(list, head, k);
        merge(list, k+1, tail);
        msort(list, head, k , tail);


    }

}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
