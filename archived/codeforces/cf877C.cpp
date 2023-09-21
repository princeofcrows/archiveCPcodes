#include <bits/stdc++.h>
using namespace std;

string star[10], str;
int af[5005], ab[5005], b[5005];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, k, l, n, ans;
    cin >> n;
    if(n%2){
        cout << (n/2)*2 + (n+1)/2 << endl;
    }
    else{
        cout << (n*3)/2 << endl;
    }
    for(i=2;i<=n;i+=2){
        cout << i <<" ";
    }
    for(i=1;i<=n;i+=2){
        cout << i <<" ";
    }
    for(i=2;i<=n;i+=2){
        cout << i <<" ";
    }
    return 0;
}












