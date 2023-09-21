#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

lli gcd(lli a, lli b){
    if(a%b==0) return b;
    return gcd(b , a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, ans1, ans2;
    double p;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2){
            cout << 0 <<endl;
            continue;
        }
        ans1 = 1;
        ans2 = 0;
        for(i=2; i*i<=n; i++){
            if(n%i==0){
                if((n/i)!=i) ans1+=2;
                else ans1++;
                if(i%2==0){
                    p = sqrt(i);
                    if(floor(p)-p==0){
                        ans2++;
                    }
                }
                if((n/i)%2==0&&i!=(n/i)){
                    p = sqrt((n/i));
                    if(floor(p)-p==0){
                        ans2++;
                    }
                }
            }
        }
        if(ans2==0) cout << 0 <<endl;
        else{
            j = gcd(ans1, ans2);
            ans1/=j;
            ans2/=j;
            cout << ans2 <<"/"<<ans1 <<endl;
        }
    }
    return 0;
}

