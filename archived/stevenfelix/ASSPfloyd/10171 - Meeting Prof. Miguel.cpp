#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3;

ll arsz;
long long ara[10005], ara2[10005];
vector <string> star;
vector <string> as;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <pi> > gy(10005);
vector < vector <pi> > gm(10005);
map <string, long long> dat;

void dijkestra1(long long s, long long n){
    for(ll i=1;i<n;i++) ara[i] = 999999999999999;
    ara[s] = 0;
    priority_queue <pi, vector <pi>, greater <pi>> q;
    q.push({0, s});
    while(!q.empty()){
        pi top;
        top = q.top();
        q.pop();
        ll a = top.second;
        ll b = top.first;
        if(ara[a]==b){
            for(ll i =0;i<gy[a].size();i++){
                ll c = gy[a][i].first;
                ll d = gy[a][i].second;
                if(ara[a]+d<ara[c]){
                    ara[c] = ara[a]+d;
                    q.push({ara[c], c});
                }
            }
        }
    }
}

void dijkestra2(long long s, long long n){
    for(ll i=1;i<n;i++) ara2[i] = 999999999999999;
    ara2[s] = 0;
    priority_queue <pi, vector <pi>, greater <pi>> q;
    q.push({0, s});
    while(!q.empty()){
        pi top;
        top = q.top();
        q.pop();
        ll a = top.second;
        ll b = top.first;
        if(ara2[a]==b){
            for(ll i =0;i<gm[a].size();i++){
                ll c = gm[a][i].first;
                ll d = gm[a][i].second;
                if(ara2[a]+d<ara2[c]){
                    ara2[c] = ara2[a]+d;
                    q.push({ara2[c], c});
                }
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, p, s, n, m;
    while(cin >> n){
        if(n==0) break;
        c = 1;
        dat.clear();
        star.clear();
        for(i=0;i<n;i++){
            cin >> str >> str1 >> str2 >> str3 >> a;
            if(!dat[str2]){
                dat[str2] = c++;
                star.push_back(str2);
            }
            if(!dat[str3]){
                dat[str3] = c++;
                star.push_back(str3);
            }
            if(str=="Y"){
                gy[dat[str2]].push_back({dat[str3], a});
                if(str1=="B") gy[dat[str3]].push_back({dat[str2], a});
            }
            else if(str=="M"){
                gm[dat[str2]].push_back({dat[str3], a});
                if(str1=="B") gm[dat[str3]].push_back({dat[str2], a});
            }
        }
        cin >> str2 >> str3;
        if(!dat[str2]){
            dat[str2] = c++;
            star.push_back(str2);
        }
        if(!dat[str3]){
            dat[str3] = c++;
            star.push_back(str3);
        }
        dijkestra1(dat[str2], c);
        dijkestra2(dat[str3], c);
        ans = 9999999999999;
        for(i=1;i<c;i++){
            if(ans>ara[i]+ara2[i]){
                ans = ara[i]+ara2[i];
            }
        }
        for(i=1;i<c;i++){
            if(ans==ara[i]+ara2[i]){
                as.push_back(star[i-1]);
            }
        }
        if(ans>=9999999999999) cout << "You will never meet.\n";
        else{
            cout << ans <<" ";
            sort(as.begin(), as.end());
            for(i=0;i<as.size();i++){
                cout << as[i];
                if(i!=as.size()-1) cout << " ";
            }
            cout <<endl;
        }
        for(i=0;i<c;i++){
            gy[i].clear();
            gm[i].clear();
        }
        as.clear();
    }
    return 0;
}















