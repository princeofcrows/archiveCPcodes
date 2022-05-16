
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str[3], str1, str2;

long long ara[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

multiset <long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, t, j, i, m, h, h2, m2, c, a, b, mx, k, temp;
    multiset <long long>::iterator hi, lo;
    while(cin >> n){
        if(n==0) break;
        ans = 0;
        for(i=0;i<n;i++){
            cin >> a;
            for(j=0;j<a;j++){
                cin >> temp;
                dat.insert(temp);
            }
            lo = dat.begin();
            hi = dat.end();
            hi--;
            ans+=*hi-*lo;
            dat.erase(hi);
            dat.erase(lo);
        }
        //for(hi=dat.begin();hi!=dat.end();++hi) cout << *hi << " ";
        cout << ans <<endl;
        dat.clear();
    }
    return 0;
}















