//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string str, str1, pas1[10], pas2[10];
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
map <string, bool> dat2;
vector <vector <char> > graph(100);

void rec(long long i){
    if(i>=5) return;
    map <char, int> test;
    for(long long j=0;j<6;j++){
        if(test[pas1[j][i]]) continue;
        test[pas1[j][i]] = 1;
        for(long long l=0;l<6;l++){
            if(pas1[j][i]==pas2[l][i]){
                graph[i].push_back(pas2[l][i]);
                break;
            }
        }
    }
    rec(i+1);
}

void dfs(long long i, string ans){
    if(i==5){
        if(ans.length()==5){
            if(!dat2[ans]){
                dat2[ans] = 1;
                dat.push_back(ans);
            }
        }
        return;
    }
    for(long long j=0;j<graph[i].size();j++){
        ans+=graph[i][j];
        dfs(i+1, ans);
        ans.erase(ans.end()-1);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> k;
        for(i=0;i<6;i++){
            cin >> pas1[i];
        }
        for(i=0;i<6;i++){
            cin >> pas2[i];
        }
        dat.clear();
        dat2.clear();
        vector <vector <char> > tgraph(100);
        swap(tgraph, graph);
        rec(0);
        dfs(0, "");
        sort(dat.begin(), dat.end());
        if(dat.size()<k) cout << "NO" << endl;
        else cout << dat[k-1] << endl;
    }
    return 0;
}







