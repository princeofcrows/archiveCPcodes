#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[100005], ara2[100005], ara3[100005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans, k;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    ara[0] = ara[n];
    ara[n+1] = ara[1];
    memset(ara3, 0, sizeof ara3);
    for(i=0;i<k;i++){
        cin >> ara2[i];
    }
    ans = ara[1]*ara[n];
    temp = ara[n];
    for(i=1;i<n;i++){
        ans+=ara[i]*ara[i+1];
        temp+=ara[i];
    }
    a = 0;
    for(i=0;i<k;i++){
        ans += ara[ara2[i]]*(temp-ara[ara2[i]]-ara[ara2[i]-1]-ara[ara2[i]+1]-a);
        if(ara3[ara2[i]-1]==1){
            ans+= ara[ara2[i]-1]*ara[ara2[i]];
        }
        if(ara3[ara2[i]+1]==1){
            ans+= ara[ara2[i]+1]*ara[ara2[i]];
        }
        a+=ara[ara2[i]];
        ara3[ara2[i]] = 1;
        if(ara2[i]==n) ara3[0] = 1;
        if(ara2[i]==1) ara3[n+1] = 1;
    }
    cout << ans;
    return 0;
}











