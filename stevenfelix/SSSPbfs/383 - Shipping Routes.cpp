#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

ll arsz;
vector <ll> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <ll> > graph(105);
queue <ll> q;
ll vis[105];
map <string, ll> dat;
map <ll, string> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n;
    cin >> t;
    h = 1;
    cout << "SHIPPING ROUTES OUTPUT"<<endl<<endl;
    while(t--){
        cin >> m >> n >> p;
        c = 1;
        for(j=0;j<m;j++){
            cin >> str;
            dat[str] = c;
            dat2[c] = str;
            c++;
        }
        for(j=0;j<n;j++){
            cin >> str >> str1;
            graph[dat[str]].push_back(dat[str1]);
            graph[dat[str1]].push_back(dat[str]);
        }
        cout << "DATA SET  "<<h++<<endl<<endl;
        while(p--){
            cin>> a >> str >> str1;
            q.push(dat[str]);
            for(i=1;i<c;i++) vis[i] = INT_MAX;
            vis[dat[str]] = 0;
            while(!q.empty()){
                ans = q.front();
                q.pop();
                for(i=0;i<graph[ans].size();i++){
                    if(vis[graph[ans][i]]>vis[ans]+1){
                        vis[graph[ans][i]] = vis[ans]+1;
                        q.push(graph[ans][i]);
                    }
                }
            }
            if(vis[dat[str1]]==INT_MAX){
                cout << "NO SHIPMENT POSSIBLE"<<endl;
            }
            else{
                cout << "$"<<vis[dat[str1]]*a*100<<endl;
            }
        }
        for(i=0;i<c;i++) graph[i].clear();
        dat.clear();
        dat2.clear();
        c = 1;
        cout << endl;
    }
    cout << "END OF OUTPUT"<<endl;
    return 0;
}















