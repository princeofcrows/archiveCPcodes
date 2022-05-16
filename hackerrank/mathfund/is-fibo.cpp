#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

long long int fibo[55];

lli fib(lli n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(fibo[n]!=-1) return fibo[n];
    return fibo[n] =fib(n-1)+fib(n-2);
}

bool binserch(lli n){
    lli lo, hi, mid;
    lo = 0;
    hi = 50;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(fibo[mid]==n){
            return true;
        }
        else if(fibo[mid]<n){
            lo = mid+1;
        }
        else if(fibo[mid]>n){
            hi = mid-1;
        }
    }
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, ans, i, j, n;
    cin >> t;
    memset(fibo, -1, sizeof fibo);
    ans = fib(50);
    while(t--){
    	cin >> n;
    	if(binserch(n)){
            cout <<"IsFibo"<<endl;
        }
        else{
            cout <<"IsNotFibo"<<endl;
        }

	}
    return 0;
}

