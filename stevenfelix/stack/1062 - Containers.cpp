
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

//____________________________________________________________________________________//
//____________________________________________________________________________________//

map <string, long long> dat;
vector < stack <char> > vstk;
stack <char> stk;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n, d;
    d = 1;
    while(cin>>str){
        if(str=="end") break;
        bool vis[30];
        memset(vis, false, sizeof vis);
        n = str.length();
        for(i=0;i<n;i++){
            a = -1;
            mx = 99999999;
            for(j=0;j<vstk.size();j++){
                if(vstk[j].top()>=str[i]){
                    if(mx>vstk[j].top()-str[i]){
                        mx = vstk[j].top()-str[i];
                        a = j;
                    }
                }
            }
            if(a==-1){
                stk.push(str[i]);
                vstk.push_back(stk);
                stk.pop();
            }
            else{
                vstk[a].push(str[i]);
            }
        }
        cout <<"Case "<<d++<<": "<<vstk.size();
        cout << endl;
        vstk.clear();
        while(!stk.empty()) stk.pop();
    }
    return 0;
}















