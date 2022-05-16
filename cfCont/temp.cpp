#include <bits/stdc++.h>

using namespace std;

#define mx 400005
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define si(x) scanf("%lld", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx], sz[mx], dat[mx];

void initset(int n){
    for(int i = 1; i<=n; i++){
        ara[i] = i;
        sz[i] = 1;
    }
}

int findset(int i){
    if(ara[i] == i) return i;
    return ara[i] = findset(ara[i]);
}

bool issameset(int i, int j){
    return (findset(i)==findset(j));
}

void unionset(int i, int j){
    int a = findset(j);
    int b = findset(i);
    if(a==b) return;
    if(sz[a]>=sz[b]){
        sz[a]+=sz[b];
        ara[b] = a;
    }
    else{
        sz[b]+=sz[a];
        ara[a] = b;
    }
}

int32_t main(){
  //read();
  //fst;
  int t;
  cin >> t;
  while(t--){
    int n;
    set <int> s, cnt;

    cin >> n;
    initset(n);
    for(int i=1;i<=n;i++) {
      cin >> dat[i];
    }
    for(int i=n;i>=1;i--) {
      set <int>:: iterator it = s.begin();
      int m = dat[i];

      while(it != s.end()) {
        if((*it) > dat[i]) break;
        unionset(dat[i], *it);
        m = min(m, *it);
        s.erase(it);
        it = s.begin();
      }
      s.insert(m);
    }

    for(int i=1;i<=n;i++) {
      cnt.insert(findset(i));
    }

    cout << cnt.size() << endl;
  }
  return 0;
}
