#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n;
    int k;
    while(cin >> n >> k){
        long double ans = 0.0;
        for(int i=0;i<k;i++){
            ans += (log10((n-i)*1.0)-log10((i+1)*1.0));
        }
        cout << (long long int) (floor(ans)+1) << endl;
    }
    return 0;
}
