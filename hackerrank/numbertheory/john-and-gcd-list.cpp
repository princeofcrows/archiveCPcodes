#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

lli ara[1005];

lli gcd(lli a, lli b){
    if(a%b==0) return b;
    return gcd(b , a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, ans1, ans2;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        cout << ara[0] <<" ";
        for(i=1;i<n;i++){
            cout << (ara[i]*ara[i-1])/gcd(ara[i], ara[i-1]) << " ";
        }
        cout << ara[n-1]<<endl;
    }
    return 0;
}

