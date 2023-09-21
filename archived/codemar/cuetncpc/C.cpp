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
vector < vector <long long> > pom(105);

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

string dir[100005];

int main(){
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i,h, h2, m2, c, a, b, mx, d, a2, d2, k2, k, r, n, ans2;
    scanf("%lld", &t);
    j = 1;
    while(t--){
        scanf("%lld%lld", &n, &r);
        for(i=0;i<n;i++){
            scanf("%lld", &ara[i]);
            ara2[i] = ara[i];
        }
        for(i=0;i<n;i++){
            cin >> dir[i];
        }
        ans = h = 0;
        for(i=0;i<n-1;i++){
            ans+=((ara[i])/(r*2));
            if(ara[i]%(r*2)==0) continue;
            if(dir[i]==dir[i+1]){
                ans++;
                ara[i+1]= ara[i+1]-(2*r-(ara[i]%(r*2)));
                if(ara[i+1]<0) ara[i+1] = 0;
            }
            else{
                if(ara[i]%(r*2)>r) ans++;
                else{
                    ans++;
                    ara[i+1]-=r;
                    if(ara[i+1]<0) ara[i+1] = 0;
                }
            }
        }
        ans+=(ara[n-1]/(r*2));
        if(ara[n-1]%(r*2)) ans++;

        ans2 = 0;
        for(i=n-1;i>0;i--){
            ans2+=((ara2[i])/(r*2));
            if(ara2[i]%(r*2)==0) continue;
            if(dir[i]==dir[i-1]){
                ans2++;
                ara2[i-1]= ara2[i-1]-(2*r-(ara2[i]%(r*2)));
                if(ara2[i-1]<0) ara2[i-1] = 0;
            }
            else{
                if(ara2[i]%(r*2)>r) ans2++;
                else{
                    ans2++;
                    ara2[i-1]-=r;
                    if(ara2[i-1]<0) ara2[i-1] = 0;
                }
            }
        }
        ans2+=(ara2[0]/(r*2));
        if(ara2[0]%(r*2)) ans2++;
        printf("Case %lld: %lld\n", j, min(ans, ans2));
        j++;
    }
    return 0;
}


















