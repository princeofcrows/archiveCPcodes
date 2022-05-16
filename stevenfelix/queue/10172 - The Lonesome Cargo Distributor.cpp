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


vector < queue <long long> > q;

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s, Q;
    cin >> h;
    while(h--){
        cin >> n >> s >> Q;
        m = 0;
        q.clear();
        for(i=0;i<n;i++){
            cin >> c;
            queue <long long> tq;
            m+=c;
            for(j=0;j<c;j++){
                cin >> temp;
                tq.push(temp);
            }
            q.push_back(tq);
        }
        stack <long long> stk;
        i = 0;
        ans = 0;
        while(1){
            queue <long long> tq;
            tq = q[i];
            while(!stk.empty()){
                if(stk.top()==i+1){
                    stk.pop();
                    m--;
                    ans++;
                    continue;
                }
                if(tq.size()==Q) break;
                tq.push(stk.top());
                stk.pop();
                ans++;
            }
            while(!tq.empty()){
                if(stk.size()==s) break;
                stk.push(tq.front());
                tq.pop();
                ans++;
            }
            q[i] = tq;
            i++;
            if(i==n) i = 0;
            if(m==0) break;
            ans+=2;
        }
        cout << ans << endl;
    }
    return 0;
}















