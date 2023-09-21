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
    cin >> a >> b >> c >> d;
    memset(ara, 0, sizeof ara);
    for(i=0;i<a;i++){
        cin >> m >> n;
        for(j=m;j<=n;j++) ara[j] = 1;
    }
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<b;i++){
        cin >> m >> n;
        for(j=m;j<=n;j++) ara2[j] = 1;
    }
    mx = 0;
    for(j=c;j<=d;j++){
        for(i=0;i<1001;i++){
            if(ara[j+i]==ara2[i]&&ara2[i]){
                mx++;
                break;
            }
        }
    }
    cout << mx;
    return 0;
}




















