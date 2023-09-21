#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

string st11, st22, st21, st12;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n >> t;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(),x.end());
    ans = 0;
    memset(ara, 0, sizeof ara);
    while(t--){
        cin >> a >> b;
        ara[a]++;
        ara[b+1]--;
    }
    for(i=1;i<=n;i++){
        ara[i] += ara[i-1];
        y.push_back(ara[i]);
    }
    sort(y.begin(),y.end());
    for(i=0;i<n;i++){
        ans+=y[i]*x[i];
    }
    cout << ans;
    return 0;
}











