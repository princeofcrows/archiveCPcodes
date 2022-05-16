
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

long long ara[200005], sz[200005];

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

long long ara2[200005];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        for(i=0;i<n;i++){
            cin >> temp;
            x.push_back(temp);
        }
        for(i=0;i<m;i++){
            cin >> temp;
            y.push_back(temp);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ans = i = j = 0;
        while(1){
            if(i==n||j==m) break;
            if(y[j]>=x[i]){
                ans+=y[j];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==n) cout << ans << endl;
        else cout << "Loowater is doomed!\n";
        x.clear();
        y.clear();
    }
    return 0;
}















