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
    cin >> k;
    memset(ara, 0, sizeof ara);
    for(i=0;i<4;i++){
        cin >> str;
        for(j=0;j<4;j++){
            if(str[j]=='.') continue;
            ara[str[j]-'0']++;
            if(ara[str[j]-'0']>2*k){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}




















