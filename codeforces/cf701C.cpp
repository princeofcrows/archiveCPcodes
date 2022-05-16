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

set <char> dat;
set <char> ordat;
map <char, long long> info;

bool check(long long m, long long n){
    dat.clear();
    info.clear();
    long long i;
    for(i=0;i<m;i++){
        info[str[i]]++;
        dat.insert(str[i]);
    }
    if(dat.size()==ordat.size()) return true;
    for(i=m;i<n;i++){
        info[str[i-m]]--;
        if(!info[str[i-m]]) dat.erase(str[i-m]);
        info[str[i]]++;
        dat.insert(str[i]);
        if(dat.size()==ordat.size()) return true;
    }
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, k, l;
    cin >> n;
    cin >>str;
    for(i=0;i<n;i++) ordat.insert(str[i]);
    l = 1;
    h = n;
    while(l<=h){
        m = (l+h)/2;
        if(check(m, n)){
            ans = m;
            h = m-1;
        }
        else l = m+1;
    }
    cout << ans;
    return 0;
}




















