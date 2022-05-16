#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
long long grid[505][505];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans,k;
    cin >> n >> k;
    a = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<k;j++){
            grid[i][j] = a++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=k;j<=n;j++){
            grid[i][j] = a++;
        }
    }
    ans = 0;
    for(i=1;i<=n;i++){
        ans+=grid[i][k];
    }
    k = 1;
    cout << ans << endl;
    for(i=k;i<=n;i++){
        for(j=k;j<=n;j++){
            cout << grid[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}











