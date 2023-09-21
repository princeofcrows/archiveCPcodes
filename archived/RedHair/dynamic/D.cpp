#include <bits/stdc++.h>
using namespace std;

int ara[100005], ara2[100005], ara3[100005];
vector <int> x;

int main(){
    //freopen("in.txt", "r", stdin);
    int a, b, c, i, j, d;
    cin >> a >> b;
    j = 0;
    for(i=a;i<=b;i++){
        cin >> ara[j];
        if(x.empty()) x.push_back(ara[j]);
        else if(i>a){
            if(ara[j]!=x[x.size()-1]) x.push_back(ara[j]);
        }
        j++;
    }
    memset(ara2, 0, sizeof ara2);
    memset(ara3, 0, sizeof ara3);
    for(i=1;i<x.size();i++){
        if(x[i]>x[i-1]){
            ara2[i] = ara2[i-1]+1;
        }
        else if(x[i]<x[i-1]){
            ara3[i] = ara3[i-1]+1;
        }
    }
    i = x.size()-1;
    c = 0;
    while(i>=0){
        i -= max(ara2[i]+1, ara3[i]+1);
        c++;
    }
    cout << c;
    return 0;
}
