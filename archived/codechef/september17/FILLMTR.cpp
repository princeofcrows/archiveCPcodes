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

int ara[100005], sz[100007], fc;
map < pair <int, int>, int> dat;
vector < vector <int> > g(100005);
string str;

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
int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans, q;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &q);
        vector < pair <int, int> > ab1;
        vector < pair <int, int> > ab0;
        while(q--){
            scanf("%d%d%d", &i, &j, &a);
            if(a==0){
                ab0.push_back({i, j});
            }
            else{
                ab1.push_back({i, j});
            }
        }
        initset(n);
        for(i=0;i<ab0.size();i++){
            a = ab0[i].first;
            b = ab0[i].second;
            unionset(a, b);
        }
        fc = 0;
        int ara2[n+5];
        memset(ara2, -1, sizeof ara2);
        for(i=0;i<ab1.size();i++){
            a = findset(ab1[i].first);
            b = findset(ab1[i].second);
            if(a==b){
                fc = 1;
                break;
            }
            if(ara2[a]!=-1){
                unionset(b, ara2[a]);
            }
            if(ara2[b]!=-1){
                unionset(a, ara2[b]);
            }
            a = findset(a);
            ara2[b] = a;
            b = findset(b);
            ara2[a] = b;
        }
        if(fc) printf("no\n") ;
        else printf("yes\n");
    }
    return 0;
}
