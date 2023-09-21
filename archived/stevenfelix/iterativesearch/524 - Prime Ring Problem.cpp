
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

long long dp[105], t, p;
bool flag[30];
vector < vector <long long> > graph(30);

void seive(){
    memset(dp, true, sizeof dp);
    for(long long i=2;i<=100;i++){
        if(dp[i]){
            for(long long j=i*2;j<=100;j+=i){
                dp[j] = 0;
            }
        }
    }
}

void rec(long long i, vector <long long> ans){
    if(i>t) return;
    for(int j=0;j<graph[i].size();j++){
        if(graph[i][j]>t) continue;
        bool ch = true;
        for(int l=0;l<ans.size();l++){
            if(ans[l]==graph[i][j]){
                ch = false;
            }
        }
        if(!ch) continue;
        ans.push_back(graph[i][j]);
        rec(graph[i][j], ans);
        if(ans.size()==t&&dp[1+ans[t-1]]){
            for(int l=0;l<ans.size();l++){
                if(l==t-1){
                    cout << ans[l]<<endl;
                }
                else{
                    cout << ans[l]<<" ";
                }
            }
        }
        ans.pop_back();
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, j, i, m, h, h2, m2, c, a, b, mx, k, d, l, n;
    seive();
    for(i=1;i<=16;i++){
        for(j=1;j<=16;j++){
            if(i==j) continue;
            if(dp[i+j]) graph[i].push_back(j);
        }
    }
    d = 1;
    while(cin >> t){
        if(d>1) cout << endl;
        vector <long long> tepo;
        tepo.push_back(1);
        cout << "Case "<<d++<<":"<<endl;
        rec(1, tepo);
    }
    return 0;
}















