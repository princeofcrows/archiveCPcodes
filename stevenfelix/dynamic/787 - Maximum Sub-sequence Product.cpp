
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

map <string, long long> dat;
map <long long, string> dat2;

void initset(long long n){
    for(long long i = 1; i<=n; i++){
        ara[i] = i;
        sz[i] = 1;
    }
}

long long findset(long long i){
    if(ara[i] == i) return i;
    return ara[i] = findset(ara[i]);
}

void unionset(long long i, long long j){
    long long a = findset(j);
    long long b = findset(i);
    if(a==b) return;
    if(sz[a]>=sz[b]){
        sz[a]+=sz[b];
        ara[b] = a;
    }
    else{
        sz[b]+=sz[a];
        ara[a] = b;
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d;
    while(cin >> ara[0]){
        i = 1;
        d = 0;
        c = 0;
        while(1){
            cin >> temp;
            if(temp==-999999) break;
            ara[i] = temp;
            if(temp!=0){
                d = 1;
                if(temp<0&&ara[i-1]<0) c = 1;
                else if(temp>0) c = 1;
            }
            i++;
        }
        a = 1;
        n = i;
        mx = 1;
        mn = 1;
        ans = 0;
        for(i=0;i<n;i++){
            if(ara[i]>0){
                mx = mx*ara[i];
                mn = min(mn*ara[i], a);
            }
            else if(ara[i]==0){
                mx = 1;
                mn = 1;
            }
            else if(ara[i]<0){
                temp = mx;
                mx = max(mn*ara[i], a);
                mn = temp*ara[i];
            }
            ans = max(ans, mx);
        }
        if(d==0){
            if(n==1) cout << ara[0];
            else cout << 0;
        }
        else if(d==1&&c==0){
            cout << 0;
        }
        else{
            cout << ans;
        }
        cout << endl;
    }
    return 0;
}















