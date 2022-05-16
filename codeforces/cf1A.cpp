//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>
typedef long long ll
typedef vector <long long> vi

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

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    ll n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n >> m >> a;
	x = n/a;
	y = m/a;
	if(n%a!=0) x++;
	if(m%a!=0) y++;
	ans = x*y;
	cout << ans << endl;
    return 0;
}

