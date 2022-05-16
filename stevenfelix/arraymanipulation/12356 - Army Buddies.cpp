
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

string str, str1, str2, star[100005];

long long ara[200005], ara2[200005], ara3[200005];

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
//____________________________________________________________________________________//

set <long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    set <long long>::iterator it, lo, hi;
    while(cin >> n >> t){
        if(n==0&&t==0) break;
        dat.clear();
        dat.insert(-1);
        for(i=1;i<=n;i++){
            dat.insert(i);
        }
        dat.insert(INT_MAX);
        for(j=0;j<t;j++){
            cin >> a >> b;
            it=dat.find(a);
            it--;
            for(i=a;i<=b;i++) dat.erase(i);
            lo = dat.lower_bound(b);
            if(*it==-1) cout<< "* ";
            else cout << *it<<" ";
            if(*lo==INT_MAX) cout << "*";
            else cout << *lo;
            cout << endl;
        }
        cout<<"-"<<endl;
    }
    return 0;
}















