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
string str;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long n, temp, k, r, avg, t2, temp2, j, ans, t, m, a, b, i;
    cin >> k;
    cin >> str;
    n = str.length();
    x.push_back(str[0]-'0');
    long long int ara[n+5];
    memset(ara, 0, sizeof ara);
    a = 0;
    for(i=1; i<n; i++){
        x.push_back(x[i-1]+str[i]-'0');
        a+=str[i]-'0';
    }
    a+=str[0]-'0';
    if(n==a&&k<=a&&k!=0){
        cout << (a-k+1);
        return 0;
    }
    for(i=0; i<n; i++){
        ara[x[i]]++;
    }
    ans = 0;
    if(k==0){
        for(i=1; i<=n; i++){
            ans+=ara[i]*(ara[i]-1)/2;
        }
        cout << ans+(ara[0]*(ara[0]+1)/2);
        return 0;
    }
    for(i=0; i<n; i++){
        if(k+x[i]<n&&str[i]=='0') ans+=ara[k+x[i]];
        else if(k+x[i]-1<n&&str[i]=='1') ans+=ara[k+x[i]-1];
    }
    cout << ans;
    return 0;
}






