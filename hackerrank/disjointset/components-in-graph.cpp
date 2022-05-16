#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
int ara[100005], sz[100005];

int finD(int x){
    if(ara[x]==x) return x;
    return finD(ara[x]);
}

void Merge(int temp1, int temp2){
    int x1 = finD(temp1);
    int x2 = finD(temp2);
    if(x1==x2) return;
    if(sz[x2]>=sz[x1]){
        ara[x1] = x2;
        sz[x2] +=sz[x1];
    }
    else{
        ara[x2] = x1;
        sz[x1] +=sz[x2];
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    int i, j, ans, n, temp1, sum, temp2, q;
    cin >> n;
    ans= 0;
    for(i=1; i<=2*n; i++){
        ara[i] = i;
        sz[i] = 1;
    }
    for(i=0; i<n; i++){
        cin >> temp1 >> temp2;
        Merge(temp1, temp2);
    }
    int mn, mx;
    mx = -2;
    mn = 1<<28;
    for(i=1; i<=2*n; i++){
        sum = sz[finD(i)];
        if(sum==1) continue;
        if(sum<mn) mn = sum;
        if(sum>mx) mx = sum;
    }
    cout << mn <<" "<<mx;
    return 0;
}
