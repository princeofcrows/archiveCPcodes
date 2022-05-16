#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int ara[100005], n;

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
    ara[n-1] = NULL;
    n--;
    stfdwn(i);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, v, q;
    cin >> q;
    n = 0;
    while(q--){
        cin >> a;
        if(a==1){
            cin >> v;
            Insert(v);
        }
        if(a==2){
            cin >> v;
            Delete(v);
        }
        if(a==3){
            cout << ara[0]<<endl;
        }
    }
    return 0;
}
