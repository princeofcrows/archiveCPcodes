#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
long long int num[100005], temp[100005];

void mergesort(long long int lo, long long int hi){
    if(lo==hi) return;
    long long int mid = (lo+hi)/2;
    mergesort(lo, mid);
    mergesort(mid+1, hi);
    long long int i, j, k;
    for(i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1) temp[k] = num[j++];
        else if(j==hi+1) temp[k] = num[i++];
        else if(num[i]<num[j]) temp[k] = num[i++];
        else temp[k] = num[j++];
    }
    for(k=lo;k<=hi;k++) num[k] = temp[k];
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k, x;
    cin >> n >> x;
    ans =0;
    for(i=0; i<n; i++){
        cin >> num[i];
    }
    mergesort(0, n-1);
    for(i=0; i<n; i++){
        ans+=x*num[i];
        if(x!=1) x--;
    }
    cout <<ans;
    return 0;
}

