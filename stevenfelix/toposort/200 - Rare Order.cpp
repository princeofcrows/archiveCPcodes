#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


map <char, int> dat;
map <int, char> dat2;
vector < vector <int> > graph(30);
bool vis[30];
stack <int> stk;

void toposort(int u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push(u);
}

void resprint(int n, int c){
    int j, i, a;
    for(i=0;i<n-1;i++){
        for(j=0; j<min(star[i].length(), star[i+1].length()); j++){
            if(star[i][j]!=star[i+1][j]){
                graph[dat[star[i][j]]].push_back(dat[star[i+1][j]]);
                break;
            }
        }
        //cout << star[i] <<endl;
    }
    //cout << c << endl;
    memset(vis, false, sizeof vis);
    for(i=1;i<c;i++){
        if(vis[i]==false){
            toposort(i);
        }
    }
    while(!stk.empty()){
        a = stk.top();
        stk.pop();
        cout << dat2[a];
    }
    cout << endl;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, n, m;
    c = 1;
    j = 0;
    bool flag = false;
    while(cin >> str){
        if(str=="#"){
            resprint(j, c);
            for(i=0;i<29;i++) graph[i].clear();
            str.clear();
            dat2.clear();
            dat.clear();
            c = 1;
            j = 0;
            star.clear();
            continue;
        }
        n = str.length();
        //cout << str <<endl;
        for(i=0;i<n;i+=1){
            if(dat[str[i]]==0){
                dat2[c] = str[i];
                dat[str[i]] = c;
                //cout << dat2[c] << " "<<c <<endl;
                c++;
            }
        }
        star.push_back(str);
        j++;
        //cout << star[i-1]<<endl;
    }
    return 0;
}















