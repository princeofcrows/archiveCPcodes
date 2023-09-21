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

vector < vector <int> > graph(105);
int dfs_low[105], dfs_num[105], dfs_cnt, dfs_parent[105], root, child, art_ver[105];

void articulationpoint(int u){
    dfs_low[u] = dfs_num[u] = dfs_cnt++;
    for(int i=0;i<graph[u].size();i++){
        if(dfs_num[graph[u][i]] == 0){
            dfs_parent[graph[u][i]] = u;
            if(u==root){
                child++;
                //cout << "root " << graph[u][i] <<" ";
            }
            articulationpoint(graph[u][i]);
            if(dfs_low[graph[u][i]]>=dfs_num[u]){
                art_ver[u] = 1;
            }
            dfs_low[u] = min(dfs_low[u], dfs_low[graph[u][i]]);
        }
        else if(graph[u][i]!=dfs_parent[u]){
            dfs_low[u] = min(dfs_low[u], dfs_num[graph[u][i]]);
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    bool flag;
    while(1){
        cin>>n;
        getchar();
        if(n==0) break;
        while(1){
            getline(cin, str);
            //cout << str << endl;
            if(str=="0") break;
            vector <int> nums;
            a = 0;
            for(j=0;j<str.length();j++){
                if(str[j]==' '){
                    nums.push_back(a);
                    //cout << a <<" ";
                    a = 0;
                    continue;
                }
                a = a*10 + str[j]-'0';
            }
            nums.push_back(a);
            //cout << a << endl;
            for(k=1;k<nums.size();k++){
                graph[nums[0]].push_back(nums[k]);
                graph[nums[k]].push_back(nums[0]);
            }
            //cout << nums[j] <<" ";

        }
        dfs_cnt = 1;
        memset(dfs_num, 0, sizeof dfs_num);
        memset(art_ver, 0, sizeof art_ver);
        for(j=1;j<=n;j++){
            if(dfs_num[j]==0){
                root = j; child = 0;
                articulationpoint(j);
                art_ver[j] = (child>1);
            }
        }
        ans = 0;
        for(j=1;j<=n;j++){
            if(art_ver[j]){
                ans++;
                //cout << j<<" ";
            }
        }
        cout << ans << endl;
        for(j=1;j<=n;j++){
            graph[j].clear();
        }
    }
    return 0;
}















