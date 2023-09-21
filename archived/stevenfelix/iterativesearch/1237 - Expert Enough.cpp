
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


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> star[i] >> a >> b;
            ab.push_back({a, b});
            //cout << star[i] << ab[i].first << ab[i].second<<endl;
        }
        cin >> m;
        while(m--){
            cin >> temp;
            a = 0;
            for(i=0;i<n;i++){
                if(ab[i].first<=temp&&ab[i].second>=temp){
                    a++;
                    j = i;
                }
            }
            //cout << a << endl;
            if(a!=1) cout << "UNDETERMINED"<<endl;
            else cout << star[j] << endl;
        }
        ab.clear();
        if(t>=1)cout << endl;
    }
    return 0;
}















