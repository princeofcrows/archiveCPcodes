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

queue <ll> cars[2];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s;
    cin >> h;
    while(h--){
        cin >> n >> m;
        n*=100;
        for(i=0;i<m;i++){
            cin >> a >> str;
            if(str=="left") cars[0].push(a);
            else cars[1].push(a);
        }
        ll index = 0;
        ans = 0;
        while(!(cars[0].empty()&&cars[1].empty())){
            ll cnt = 0;
            while(!cars[index].empty()){
                if(cnt+cars[index].front()>n) break;
                cnt+=cars[index].front();
                cars[index].pop();
            }
            index^=1;
            ans++;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}















