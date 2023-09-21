/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
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

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

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
//____________________________________________________________________________________//
vector <vector <long long> > graph(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        memset(ara, 0, sizeof ara);
        for(i=0;i<n;i++){
            cin >> temp;
            for(j=0;j<temp;j++){
                cin >> a;
                ara[a]++;
                graph[i].push_back(a);
            }
        }
        bool flag = false;
        for(i=1;i<=k;i++){
            if(ara[i]==0){
                cout << "sad" <<endl;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        flag = false;
        for(i=0;i<n;i++){
            ans = 0;
            for(j=0;j<graph[i].size();j++){
                if(ara[graph[i][j]]==1){
                    ans = 1;
                    break;
                }
            }
            if(ans==0){
                flag = true;
                cout << "some" <<endl;
                break;
            }
        }
        if(!flag) cout << "all" <<endl;

        for(i=0;i<=n;i++) graph[i].clear();
    }
    return 0;
}











