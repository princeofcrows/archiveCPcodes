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

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);

    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    a = __gcd(ara[0], ara[1]);
    for(i=2;i<n;i++){
        a = gcd(a, ara[i]);
    }
    if(a>1){
        cout << "YES\n";
        cout << 0;
        return 0;
    }
    ans = 0;
    for(i=0;i<n-1;i++){
        if(ara[i]%2&&ara[i+1]%2){
            b = ara[i]-ara[i+1];
            c = ara[i]+ara[i+1];
            ara[i] = b;
            ara[i+1] = c;
            ans++;
        }
    }
    for(i=0;i<n-1;i++){
        if(ara[i]%2!=ara[i+1]%2){
            b = ara[i]-ara[i+1];
            c = ara[i]+ara[i+1];
            ara[i] = b;
            ara[i+1] = c;
            b = ara[i]-ara[i+1];
            c = ara[i]+ara[i+1];
            ara[i] = b;
            ara[i+1] = c;
            ans+=2;
        }
    }
    a = __gcd(ara[0], ara[1]);
    for(i=2;i<n;i++){
        a = __gcd(a, ara[i]);
    }
    if(a!=1){
        cout << "YES\n";
        cout << ans;
        return 0;
    }
    else{
        cout << "NO";
    }
    return 0;
}




















