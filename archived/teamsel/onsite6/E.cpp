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

vector <int> g[5005];
stack <int> stk;
map <string, int> dat;
int ans, mx, ara[5005], sz[5005];
string str, str1;

void initset(long long n){
    for(long long i = 1; i<=n; i++){
        ara[i] = i;
        sz[i] = 1;
    }
}

long long findset(long long i){
    if(ara[i] == i) return i;
    return ara[i] = findset(ara[i]);
}

void unionset(long long i, long long j){
    long long a = findset(j);
    long long b = findset(i);
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

int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h2, m2, c, a, b, d, k, l, r;
    while(cin >> c >> r){
        if(c==0&&r==0) break;
        a = 1;
        initset(c);
        for(i=0;i<c;i++){
            cin >> str;
            dat[str] = a++;
        }
        for(i=0;i<r;i++){
            cin >> str >> str1;
            unionset(dat[str], dat[str1]);
        }
        mx = 0;
        for(i=1;i<=c;i++) mx = max(mx, sz[i]);
        cout << mx << endl;
        dat.clear();
    }
    return 0;
}







