#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz, n;
vector <int> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <int> > graph(10005);
queue <int> q;
int vis[100];
map <int, int> dat;
map <int, int> dat2;

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    bool flag;
    while(cin >> n){
        if(n==0) break;
        c = 1;
        for(j=0;j<n;j++){
            cin >> a >> b;
            if(dat[a]==0){
                dat[a] = c;
                dat2[c] = a;
                c++;
            }
            if(dat[b]==0){
                dat[b] = c;
                dat2[c] = b;
                c++;
            }
            graph[dat[a]].push_back(dat[b]);
            graph[dat[b]].push_back(dat[a]);
        }
        while(cin>>a>>b){
            if(a==0&&b==0) break;
            q.push(dat[a]);
            for(i=1;i<c;i++) vis[i] = 100000000;
            vis[dat[a]] = 0;
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
            ans = 0;
            for(i=1;i<c;i++){
                if(vis[i]>b) ans++;
            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", t++, ans, a, b);
        }
        for(i=0;i<c;i++) graph[i].clear();
        dat.clear();
        dat2.clear();
        c = 1;
    }
    return 0;
}















