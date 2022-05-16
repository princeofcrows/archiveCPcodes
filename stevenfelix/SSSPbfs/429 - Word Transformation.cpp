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

vector < vector <ll> > graph(205);
queue <ll> q;
ll vis[205];
map <string, ll> dat;
map <ll, string> dat2;
vector <string> inf[14];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, l;
    cin >> t;
    while(t--){
        c=1;
        while(cin >> star[c]){
            //cout << star[c] << endl;
            if(star[c]=="*") break;
            inf[star[c].length()].push_back(star[c]);
            dat[star[c]] = c;
            c++;
        }
        getchar();
        for(i=1;i<=11;i++){
            for(j=0;j<inf[i].size();j++){
                for(l=j+1;l<inf[i].size();l++){
                    b=0;
                    for(a=0;a<i;a++){
                        if(inf[i][j][a]!=inf[i][l][a]) b++;
                    }
                    if(b==1){
                        graph[dat[inf[i][l]]].push_back(dat[inf[i][j]]);
                        graph[dat[inf[i][j]]].push_back(dat[inf[i][l]]);
                    }
                }
            }
        }
        while(getline(cin, str)){

            //cout << str;
            if(str=="") break;
            str+=" ";
            i=0;
            str1.clear(); str3.clear();
            i = 0;
            while(str[i]!=' '){
                str1+=str[i];
                i++;
            }
            i++;
            while(str[i]!=' '){
                str3+=str[i];
                i++;
            }
            q.push(dat[str1]);
            for(i=1;i<c;i++) vis[i] = INT_MAX;
            vis[dat[str1]] = 0 ;
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
            cout << str << vis[dat[str3]] <<endl;
        }
        for(i=0;i<c;i++) graph[i].clear();
        dat.clear();
        for(j=0;j<=11;j++) inf[j].clear();
        if(t) cout << endl;
    }
    return 0;
}















