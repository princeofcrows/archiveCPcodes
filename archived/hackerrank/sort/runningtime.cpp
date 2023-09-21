#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int N, int arr[]) {
    int i,j;
    int value, ans=0;
    for(i=0;i<N;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            value=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=value;
            j--;
            ans++;
        }
    }
    cout << ans;
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
