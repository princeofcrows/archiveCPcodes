#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
vector <ll> g[100005];
priority_queue <pii, vector<pii>, greater<pii>> q;
int NC[1005];
int MC[1005], n, m;
int ans;
string str;

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

bool oc(int a, int b){
    for(int i=0;i<20;i++){
        if(check(a, i)&&check(b, i)) return false;
    }
    return true;
}

int cnt(int a){
    int b = 0;
    for(int i=0;i<20;i++){
        if(check(a, i)) b++;
    }
    return b;
}

void ch(int idx, int msk){
    if(idx==m){
        ans = min(ans, cnt(msk));
    }
    //cout << idx <<" "<<msk;
    for(int i=0;i<g[MC[idx]].size();i++){
        if(oc(msk, g[MC[idx]][i])){
            ch(idx+1, msk|g[MC[idx]][i]);
        }
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    int t, a, b, c, e, i, x, y, j, cs;
    cs = 1;
    scanf("%d", &e);
    while(e--){
        scanf("%d", &n);
        for(i=0;i<n;i++) scanf("%d", &NC[i]);
        scanf("%d", &m);
        for(i=0;i<m;i++) scanf("%d", &MC[i]);
        c = 1;
        for(i=1;i<=((c<<n)-1);i++){
            a = 0;
            for(j=0;j<n;j++){
                if(check(i, j)) a+= NC[j];
            }
            //cout << a <<" "<< i << endl;
            g[a].push_back(i);
        }
        ans = 40;
        ch(0, 0);
        if(ans!=40) printf("Case %d: %d\n", cs++, ans);
        else printf("Case %d: -1\n", cs++);
        vector <ll> tg[100005];
        swap(tg, g);
    }
    return 0;
}





















