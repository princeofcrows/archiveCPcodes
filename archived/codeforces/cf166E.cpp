//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
priority_queue <pair <long long, long> > q;
pair <long long, long long> top;
vector < vector <long long> > graph(300005);
vector <long long> mnode;
long long mod = 1000000007;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    if(n==1){
        cout << 0;
        return 0;
    }
    if(n==2){
        cout << 3;
        return 0;
    }
    if(n==3){
        cout << 6;
        return 0;
    }
    a = 6;
    d = 3;
    for(i=3;i<n-1;i++){
        b = (d*3)%mod;
        d = a%mod;
        a = (b+a*2)%mod;
    }
    ans = d*3+a*2;
    cout << ans%mod;
    return 0;
}




















