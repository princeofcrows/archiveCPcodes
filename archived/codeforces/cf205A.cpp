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
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        ab.push_back({temp, i+1});
    }
    sort(ab.begin(), ab.end());
    ans = ab[0].second;
    if(n==1) cout << ans;
    else if(ab[0].first==ab[1].first){
        cout << "Still Rozdil";
    }
    else{
        cout << ans;
    }
    return 0;
}











