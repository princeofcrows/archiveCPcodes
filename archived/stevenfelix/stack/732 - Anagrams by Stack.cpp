
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

string str, str1, str2, str3, str4, str5;

long long ara[1000005], ara2[200005], ara3[200005];

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

vector <string> per;
char a[500], b[500], stk[500], w[500];
long long len;

//____________________________________________________________________________________//
//____________________________________________________________________________________//

map <string, long long> dat;

void dfs(string a, string b, string stk, string path, long long n){
    if(n==str.length()*2){
        if(b==str1){
            cout << path << endl;
        }
        return;
    }
    if(a.length()>0){
        dfs(a.substr(1, a.length()-1), b, stk+a[0], path+(n==0?"i":" i"), n+1);
    }
    if(stk.length()>0&&stk[stk.length()-1]==str1[b.length()]){
        dfs(a, b+stk[stk.length()-1], stk.substr(0, stk.length()-1), path+" o", n+1);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n;
    c = 1;
    while(cin >> str >> str1){
        cout << "[\n";
        if(str.length()==str1.length()){
            dfs(str, "", "", "", 0);
        }
        cout << "]\n";
    }
    return 0;
}















