#include <bits/stdc++.h>
using namespace std;
#define f1 first
#define s2 second
#define int long long

vector < pair <int, int> > ab;
multiset <int> S;
multiset <int>::iterator it;

bool com(pair <int, int> i, pair <int, int> j){
    if(i.f1==j.f1) return i.s2<j.s2;
    return i.f1>j.f1;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, k, a, b, i;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> a >> b;
        ab.push_back({b, a});
    }
    sort(ab.begin(), ab.end(), com);
    for(i=0;i<k;i++){
        cin >> a;
        S.insert(a);
    }
    a = 0;
    for(i=0;i<n;i++){
        it = S.lower_bound(ab[i].s2);
        if(it!=S.end()){
            a += ab[i].f1;
            S.erase(it);
        }
    }
    cout << a;
    return 0;
}
