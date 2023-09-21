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
long long ara[4005];
long long dp[4005];
long long dp2[4005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        if(360%(180-a)==0){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    return 0;
}















