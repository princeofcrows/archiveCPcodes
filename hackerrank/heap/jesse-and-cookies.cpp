#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int ara[1000005], n, ans, swt;

void stfup(long long int i){
    if(i!=0){
        long long int prnt = (i-1)/2;
        long long int temp;
        if(ara[prnt]>ara[i]){
            temp = ara[prnt];
            ara[prnt] = ara[i];
            ara[i] = temp;
            stfup(prnt);
        }
    }
}

void stfdwn(long long int i){
    long long li, ri, temp, mi;
    li = 2*i+1;
    ri = 2*i+2;
    if(ri>=n){
        if(li>=n){
            return;
        }
        else{
            mi = li;
        }
    }
    else{
        if(ara[li]<=ara[ri]){
            mi = li;
        }
        else{
            mi = ri;
        }
    }
    if(ara[i]>=ara[mi]){
        temp = ara[i];
        ara[i] = ara[mi];
        ara[mi] = temp;
        stfdwn(mi);
    }
}

void Insert(long long v){
    ara[n] = v;
    n++;
    stfup(n-1);
}

void Delete(long long int v){
    long long int i;
    for(i=0; ara[i]!=v; i++){
        continue;
    }
    ara[i] = ara[n-1];
    ara[n-1] = 999999999999;
    n--;
    stfdwn(i);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int num, k, a, v, q, v1, v2;
    cin >> num >> k;
    n = 0;
    for(int i=0; i<num; i++){
        cin >> v;
        Insert(v);
    }
    ans = swt = 0;
    while(ara[0]<k&&n!=1){
        v1 = ara[0];
        v2 = min(ara[1], ara[2]);
        a = v1 + 2*v2;
        swt=a;
        ans++;
        Delete(v1);
        Delete(v2);
        Insert(a);
    }
    //cout << ans <<endl;
    if(ara[0]>=k)cout << ans;
    else cout << -1;
    return 0;
}













