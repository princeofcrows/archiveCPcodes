#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, ans1, ans2, p;
    double a, b, x;
    cin >> t;
    while(t--){
        cin >> a >> b >> x;
        if(b<0){
            if(a==1){
                cout << (int)x<<endl;
            }
            else{
                cout << 0 <<endl;
            }
        }
        else{
            p = pow(a, b);
            ans1 = (int)((p)/x);
            ans2 = (int)((p)/x) +1;
            n = (int) x;
            i = ans1*(int) x;
            j = ans2*(int) x;
            if((int)p-i<=j-(int)p){
                cout << i << endl;
            }
            else{
                cout << j <<endl;
            }
        }

    }
    return 0;
}

