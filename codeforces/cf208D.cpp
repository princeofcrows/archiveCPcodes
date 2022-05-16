#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[205];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return i.first<j.first;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<5;i++){
        cin >> temp;
        ab.push_back({temp, i});
    }
    sort(ab.begin(), ab.end());
    ans = 0;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n;i++){
        ans+=ara[i];
        if(ans>=ab[0].first){
            for(j=4;j>=0;j--){
                ara2[ab[j].second]+=(ans/ab[j].first);
                ans -= (ans/ab[j].first)*ab[j].first;
            }
        }
    }
    for(i=0;i<5;i++){
        cout << ara2[i] <<" ";
    }
    cout << endl << ans;
    return 0;
}











