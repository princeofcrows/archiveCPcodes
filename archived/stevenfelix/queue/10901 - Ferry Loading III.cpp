#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

ll arsz;
ll ara[100005];
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

queue < pair <ll, ll> > cars[2];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s;
    cin >> h;
    while(h--){
        cin >> n >> t >> m;
        for(i=0;i<m;i++){
            cin >> a >> str;
            if(str=="left") cars[0].push({a, i});
            else cars[1].push({a, i});
        }
        ll index = 0;
        ll time = 0;
        while(!(cars[0].empty()&&cars[1].empty())){
            ll ec = 99999999999999;
            if(!cars[0].empty()) ec = cars[0].front().first;
            if(!cars[1].empty()) ec = min(cars[1].front().first, ec);
            time = max(ec, time);
            ll cnt = 0;
            while(!cars[index].empty()&&cnt<n&&cars[index].front().first<=time){
                ara[cars[index].front().second] = time+t;
                cars[index].pop();
                cnt++;
            }
            time+=t;
            index^=1;
        }
        for(i=0;i<m;i++){
            cout << ara[i]<<endl;
        }
        if(h) cout << endl;
    }
    return 0;
}















