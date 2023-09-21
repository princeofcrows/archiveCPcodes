
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[100005];

long long ara[200005], ara2[200005], ara3[200005];
bool flagar[25];

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

long long dp[105], t, p;
bool flag[30];
vector < vector <long long> > sol;
map <string, int> dat;

bool compare(vector <long long> i, vector <long long> j){
    long long n, m;
    n = i.size();
    m = j.size();
    for(int l=0;l<min(n,m);l++){
        if(i[l]>j[l]) return true;
        if(i[l]<j[l]) return false;
    }
    return (m>n);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, j, i, m, h, h2, m2, c, a, b, mx, k, d, l, n;
    while(cin >> t >> n){
        if(t==0&&n==0) break;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        cout <<"Sums of "<<t<<":"<<endl;
        for(b=1;b<(1<<n);b++){
            ans = 0;
            for(i=0;i<n;i++){
                if(b&(1<<i)){
                    ans+=ara[i];
                }
            }
            if(ans==t){
                for(i=0;i<n;i++){
                    if(b&(1<<i)){
                        x.push_back(ara[i]);
                    }
                }
                sort(x.begin(), x.end());
                reverse(x.begin(), x.end());
                for(i=0;i<x.size();i++){
                    if(i!=0) str+= "+";
                    str+=to_string(x[i]);
                }
                if(dat[str]){
                    str.clear();
                    x.clear();
                    continue;
                }
                sol.push_back(x);
                dat[str] = 1;
                str.clear();
                x.clear();
            }

        }
        if(sol.empty()){
            cout << "NONE\n";
        }
        else{
            sort(sol.begin(), sol.end(), compare);
            for(i=0;i<sol.size();i++){
                for(j=0;j<sol[i].size();j++){
                    if(j!=0) cout <<"+";
                    cout << sol[i][j];
                }
                cout << endl;
            }
        }
        sol.clear();
        dat.clear();
    }
    return 0;
}















