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
vector <ll> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <pair<ll, pii > > > graph(205);
ll vis[205], z;
map <ll, ll> dat;
map <ll, string> dat2;
vector < vector <ll> > elev(105);

priority_queue <pii, vector<pii>, greater<pii>> q;
pii top;

void dijkstra(ll sx, ll n){
    for(int i=0;i<=n;i++)
        vis[i] = INT_MAX;
    vis[sx] = 0;
    q.push({sx, 0});
    while(!q.empty()){
        top = q.top();
        q.pop();
        if(vis[top.first]==top.second){
            for(int i=0;i<graph[top.first].size();i++){
                ll t;
                if(elev[top.first].size()==0) t = 0;
                else if(graph[top.first][i].first!=elev[top.first][elev[top.first].size()-1]) t = elev[top.first].size()+1;
                if(vis[graph[top.first][i].second.first]>vis[top.first]+graph[top.first][i].second.second + t*60){
                    for(int j=0;j<elev[top.first].size();j++){
                        elev[graph[top.first][i].second.first].push_back(elev[top.first][j]);
                    }
                    if(elev[top.first].size()==0)
                        elev[graph[top.first][i].second.first].push_back(graph[top.first][i].first);
                    else if(graph[top.first][i].first!=elev[top.first][elev[top.first].size()-1])
                        elev[graph[top.first][i].second.first].push_back(graph[top.first][i].first);

                    vis[graph[top.first][i].second.first] = vis[top.first]+graph[top.first][i].second.second+(elev[graph[top.first][i].second.first].size()-1)*60;
                    q.push({graph[top.first][i].second.first,vis[graph[top.first][i].second.first]});
                    elev[graph[top.first][i].second.first].clear();
                }
            }
        }
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s;
    while(cin >> n >> k){
        //z = k;
        for(i=0;i<n;i++){
            cin >> a;
            x.push_back(a);
            //cout << x[i] <<" ";
        }
        //cout << endl;
        getchar();
        for(j=0;j<n;j++){
            getline(cin, str);
            //cout << str <<endl;
            vector <ll> num;
            b = 0;
            for(i=0;i<str.length();i++){
                if(str[i]==' '){
                    num.push_back(b);
                    //cout << b << " ";
                    b = 0;
                    continue;
                }
                b = b*10+(str[i]-'0');
            }
            //cout << b <<endl;
            num.push_back(b);
            for(i=0;i<num.size()-1;i++){
                graph[num[i]].push_back({j,{num[i+1], (num[i+1]-num[i])*x[j]}});
                graph[num[i+1]].push_back({j,{num[i], (num[i+1]-num[i])*x[j]}});
                //cout << num[i] << " ";
            }
            //cout << num[i] << endl;
        }
        dijkstra(0, 100);
        if(vis[k]==INT_MAX) cout <<"IMPOSSIBLE"<<endl;
        else cout <<vis[k]<<endl;
        for(i=0;i<=100;i++){
            graph[i].clear();
            elev[i].clear();
        }
        x.clear();
    }
    return 0;
}















