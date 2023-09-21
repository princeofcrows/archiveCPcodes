#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1;

int arsz, n, m;
vector <int> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


map <char, int> dat;
map <int, char> dat2;
map <string, int> dat3;
vector < vector <int> > graph(25);
int indegree[30], c;
vector <string> res;

void alltoposort(string str3, bool vis[]){
    bool flag = false;
    for(int i=1;i<c;i++){
        if(indegree[i]==0&&vis[i]==false){
            for(int j=0;j<graph[i].size();j++){
                indegree[graph[i][j]]--;
            }
            str3+=dat2[i];
            vis[i] = true;
            alltoposort(str3, vis);

            vis[i] = false;
            str3.erase(str3.end()-1);
            for(int j=0;j<graph[i].size();j++){
                indegree[graph[i][j]]++;
            }
            flag = true;
        }
    }
    if(!flag) res.push_back(str3);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    bool flag = false;
    int ans, temp, t, j, i, h, h2, m2, a, b, mx, k;
    while(getline(cin, str)){
        if(flag) cout << endl;
        flag = true;
        n = str.length();
        c = 1;
        dat2.clear();
        dat.clear();
        for(i=0;i<n;i+=2){
            dat2[c] = str[i];
            dat[str[i]] = c;
            c++;
        }
        //cout << c <<endl;
        getline(cin, str1);
        for(i=0;i<=c;i++) graph[i].clear();
        memset(indegree, 0,sizeof indegree);
        m = str1.length();
        for(i=0;i<m;i+=4){
            graph[dat[str1[i]]].push_back(dat[str1[i+2]]);
            indegree[dat[str1[i+2]]]++;
        }
        //cout << str1 <<m<<endl;
        dat3.clear();
        res.clear();
        string str3;
        bool vis[25];
        memset(vis, false, sizeof vis);
        //cout << "done\n";
        alltoposort(str3, vis);

        sort(res.begin(), res.end());
        for(j=0;j<res.size();j++){
            cout << res[j] <<endl;
        }
    }
    return 0;
}















