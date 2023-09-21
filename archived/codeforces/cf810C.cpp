//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair  <long long, long long>  > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005], ara3[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool vis[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f;
    cin >> n;
    m = 1000000007;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    a = 1;
    for(i=0;i<n;i++){
        ara2[i] = a-1;
        ara2[i]%=m;
        a*=2;
        a%=m;
        y.push_back(ara2[i]);
    }
    a = 0;
    for(i=0;i<n;i++){
        a+=y[i]*x[i];
        a%=m;
    }
    reverse(x.begin(), x.end());
    //reverse(y.begin(), y.end());
    b = 0;
    for(i=0;i<n;i++){
        b+=y[i]*x[i];
        b%=m;
    }
    ans = a-b;
    if(ans<0) ans+=m;
    cout << ans;
    return 0;
}




















