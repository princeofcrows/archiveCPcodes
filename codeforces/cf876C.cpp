#include <bits/stdc++.h>
using namespace std;
vector <long long> x;

long long sumdig(long long a){
    long long ans = 0;
    while(a){
        ans+=a%10;
        a/=10;
    }
    return ans;
}

int main(){
    freopen("in.txt", "r", stdin);
    long long int i, j, n, a, b, c, ans, k, m;
    while(cin >> n){
        c = 81;
        x.clear();
        for(i=1;i<=c;i++){
            a = n - i;
            if(sumdig(a)==i){
                x.push_back(a);
            }
        }
        sort(x.begin(), x.end());
        cout << x.size() << endl;
        for(i=0;i<x.size();i++){
            cout << x[i] << endl;
            if(x[i]<0){
                cout << "danger";
                return 0;
            }
        }
    }
    return 0;
}
