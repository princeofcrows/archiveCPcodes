//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair  <long long, long long>  > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005], ara3[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector <long long> graph[105];
map <long long, long long> dat;
map <long long, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, k;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.rbegin(), x.rend());
    for(i=0;i<m;i++){
        cin >> temp;
        y.push_back(temp);
    }
    sort(y.rbegin(), y.rend());
    ans = n;
    i = j = 0;
    while(1){
        if(y[i]>=x[j]){
            ans--;
            i++;
        }
        j++;
        if(i==y.size()) break;
        if(j==x.size()) break;
    }
    cout << ans;
    return 0;
}




















