#include <bits/stdc++.h>
using namespace std;
#define f1 first
#define s2 second
set <pair <int, int> > s;
set <pair <int, int> >::iterator it;
vector <pair <pair <int, int>, int > > ply;
int ara[100005], ara2[100005];

bool comp(pair <pair <int, int>, int > i, pair <pair <int, int>, int > j){
    if(i.f1.f1==j.f1.f1){
        return i.s2>j.s2;
    }
    return i.f1.f1<j.f1.f1;
}

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, a, b, n, m, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        ply.push_back({{a, b}, i});
    }
    cin >> m;
    for(i=0;i<m;i++){
        cin >> a >> b >> k;
        ply.push_back({{a, b},  i+n});
        ara2[i] = k;
    }
    sort(ply.begin(), ply.end(), comp);
    memset(ara, -1, sizeof ara);
    j = 0;
    for(i=0;i<ply.size();i++){
        if(ply[i].s2>=n){
            s.insert({ply[i].f1.s2, ply[i].s2-n});
        }
        else{
            it = s.lower_bound({ply[i].f1.s2, -1});
            if(it==s.end()){
                cout << "NO";
                return 0;
            }
            //cout << i << " " << (*it).s2;
            ara[ply[i].s2] = (*it).s2;
            ara2[(*it).s2]--;
            if(!ara2[(*it).s2]){
                s.erase(it);
            }
        }
    }
    cout << "YES\n";
    for(i=0;i<n;i++){
        cout << ara[i]+1 << " ";
    }
    return 0;
}








