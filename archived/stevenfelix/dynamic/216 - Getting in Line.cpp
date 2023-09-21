
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
vector <long long> z;

string str, str1, str2;

long long ara[200005], ara2[200005];

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

long long dp[1<<15][15];

long long dist[25][25], n;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int temp, t, j, i, h, h2, m2, c, a, b, k, mn, d, l;
    double ans, mx;
    d = 1;
    while(cin >> n){
        if(!n) break;
        x.clear();
        y.clear();
        for(i=0;i<n;i++){
            cin >> ara[i] >> ara2[i];
            x.push_back(i);
            y.push_back(i);
        }
        mx = 99999999999999;
        z.clear();
        while(1){
            ans = 0;
            for(i=0;i<n-1;i++){
                ans += sqrt((ara[x[i]]-ara[x[i+1]])*(ara[x[i]]-ara[x[i+1]])+(ara2[x[i]]-ara2[x[i+1]])*(ara2[x[i]]-ara2[x[i+1]]))+16;
            }
            if(ans<mx){
                z = x;
                mx = ans;
            }
            next_permutation(x.begin(), x.end());
            if(x==y) break;
        }
        printf("**********************************************************\n");
        printf("Network #%lld\n", d++);
        double dis, tdis;
        tdis = 0;
        x = z;
        for(i=0;i<n-1;i++){
            dis = sqrt((ara[x[i]]-ara[x[i+1]])*(ara[x[i]]-ara[x[i+1]])+(ara2[x[i]]-ara2[x[i+1]])*(ara2[x[i]]-ara2[x[i+1]]))+16;
            tdis+=dis;
            printf("Cable requirement to connect (%lld,%lld) to (%lld,%lld) is %.2lf feet.\n", ara[z[i]], ara2[z[i]], ara[z[i+1]], ara2[z[i+1]], dis);
        }
        printf("Number of feet of cable required is %.2lf.\n", tdis);

    }
    return 0;
}















