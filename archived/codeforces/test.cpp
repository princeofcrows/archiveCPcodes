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
    freopen("in.txt", "w", stdout);
    long long int i, j, n, a, b, c, ans, k, m;
    for(i=1;i<=82;i++){
        cout << i << endl;
    }
    return 0;
}
