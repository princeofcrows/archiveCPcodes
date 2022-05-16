#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[100005], ara2[100005], ara3[100005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ans = 999999999999;
    for(i=0;i<n;i++){
        ara2[i] = 0;
        for(j=0;j<ara[i];j++){
            cin >> a;
            ara2[i]+=a*5+15;
        }
        ans = min(ans, ara2[i]);
    }
    cout << ans;
    return 0;
}











