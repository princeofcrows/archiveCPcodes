
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

string str, str1, str2;

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

long long f[3], l[3], m, n;
bool pos;

void soltire(vector < pair <long long, long long> > sol, bool used[]){
    if(sol.size()==n+1){
        if(sol[n].second==l[0]) pos = true;
        return;
    }
    for(long long i=0;i<m;i++){
        if(!used[i]){
            if(ab[i].first==sol[sol.size()-1].second){
                sol.push_back({ab[i].first, ab[i].second});
                used[i] = true;
                soltire(sol, used);
                sol.pop_back();
                used[i] = false;
            }
            else if(ab[i].second==sol[sol.size()-1].second){
                sol.push_back({ab[i].second, ab[i].first});
                used[i] = true;
                soltire(sol, used);
                sol.pop_back();
                used[i] = false;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k;
    while(cin >> n){
        if(n==0) break;
        cin >> m;
        cin >> f[0] >> f[1];
        cin >> l[0] >> l[1];
        ab.clear();
        for(i=0;i<m;i++){
            cin >> a >> b;
            ab.push_back({a, b});
        }
        pos = false;
        vector < pair <long long, long long> > sol;
        sol.push_back({f[0], f[1]});
        bool used[16];
        memset(used, false, sizeof used);
        soltire(sol, used);
        if(pos){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}















