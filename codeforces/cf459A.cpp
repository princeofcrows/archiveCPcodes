#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
vector <long long> v;
vector <long long> vmx(100005, 0);
vector <long long> vmn(100005, INT_MAX);
long long ara[4005];
long long dp[4005];
long long dp2[4005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, d, k, m;
    cin >> a >> b >> c >> d;
    if(a!=c&&b!=d){
        if(abs(a-c)!=abs(b-d)){
            cout << -1;
            return 0;
        }
        i = a;
        j = d;
        n = c;
        m = b;
    }
    else{
        if(a!=c){
            i = a;
            n = c;
        }
        else{
            i = (a+(b-d));
            n = (a+(b-d));
        }
        if(b!=d){
            j = b;
            m = d;
        }
        else{
            j = b+(a-c);
            m = d+(a-c);
        }
    }
    cout << i <<" "<<j <<" "<<n<<" "<<m;
    return 0;
}









