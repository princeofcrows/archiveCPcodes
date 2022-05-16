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
    cin >> n >> k;
    memset(ara, 0, sizeof ara);
    c = b = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        xy.push_back({temp, i});
        if(dat[temp]==0){
            dat[temp] = 1;
            dat2[c] = temp;
            b++;
        }
        c+=temp;
    }
    sort(xy.begin(), xy.end());
    d = 0;
    t = 0;
    mx = 0;
    for(i=1;i<=c;i++){
        ans = xy[t].first;
        d++;
        if(d!=1) ans=0;
        for(j=t;j<n;j++){
            for(f=1;f<=min(xy[j].first, ans+1);f++){
                graph[xy[j].second].push_back(d);
                mx = max(mx, d);
            }
            if(xy[j].first<=(ans+1)){
                t++;
            }
            xy[j].first-=(ans+1);
        }
    }
    if(mx>k){
        cout <<"NO";
        return 0;
    }
    cout << "YES\n";
    for(i=0;i<n;i++){
        for(j=0;j<graph[i].size();j++){
            cout << graph[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}




















