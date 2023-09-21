#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

lli sumdi(lli n){
    lli ans, ans2, temp;
    temp = n;
    ans =0;
    while(temp!=0){
        ans+=temp%10;
        temp/=10;
    }
    return ans;
}

bool smith(lli n){
    lli ans, ans2, temp, f;
    ans = sumdi(n);
    f=2;
    temp = n;
    ans2 = 0;
    while(temp!=1){
        if(temp%f==0){
            ans2+=sumdi(f);
            temp/=f;
        }
        else f++;
    }
    if(ans==ans2) return true;
    else return false;
}

int main() {
    freopen("in.txt", "r", stdin);
    long long int t, ans, i, j, n;
    cin >> n;
    if(smith(n)){
        cout <<1;
    }
    else{
        cout <<0;
    }
    return 0;
}

