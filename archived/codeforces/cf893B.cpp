#include <bits/stdc++.h>
using namespace std;
vector <int> x;

bool check(int a){
    int o, z;
    o = z = 0;
    while(a){
        if(a%2){
            o++;
        }
        else{
            if(o) return false;
            z++;
        }
        a/=2;
    }
    if(o==z+1) return true;
    return false;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, m, a, b, c, t;
    cin >> n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            x.push_back(i);
            if(i!=(n/i)) x.push_back(n/i);
        }
    }
    sort(x.begin(), x.end());
    for(i=0;i<x.size();i++){
        if(check(x[i])) a = x[i];
    }
    cout << a;
    return 0;
}
