//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
priority_queue <pair <long long, long> > q;
pair <long long, long long> top;
vector < vector <long long> > graph(300005);
vector <long long> mnode;
long long mod = 1000000007;
long long hor[503][503];
long long ver[503][503];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    memset(hor, 0, sizeof hor);
    memset(ver, 0, sizeof ver);
    for(i=0;i<n;i++){
        for(j=1;j<m;j++){
            if(star[i][j]=='.'&&star[i][j-1]=='.'){
                hor[i+1][j+1] = hor[i+1][j]+1;
            }
            else hor[i+1][j+1] = hor[i+1][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=1;j<n;j++){
            if(star[j][i]=='.'&&star[j-1][i]=='.'){
                ver[j+1][i+1] = ver[j][i+1]+1;
            }
            else ver[j+1][i+1] = ver[j][i+1];
        }
    }
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        ans = 0;
        for(i=a;i<=c;i++) ans+=hor[i][d]-hor[i][b];
        for(i=b;i<=d;i++) ans+=ver[c][i]-ver[a][i];
        cout << ans << endl;
    }
    return 0;
}




















