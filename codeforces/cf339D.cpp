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

string star[200000], str, str1, str2, str3;
long long ara[2000005], tree[20000005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

void init(long long b, long long e, long long node, long long dep){
    if(b==e){
        tree[node] = ara[b];
        return;
    }
    long long l = node*2;
    long long r = node*2+1;
    long long m = (b+e)/2;
    init(b, m, l, dep-1);
    init(m+1, e, r, dep-1);
    if(dep%2) tree[node] = tree[l]|tree[r];
    else tree[node] = tree[l]^tree[r];
}

long long query(long long b, long long e, long long node, long long i, long long j, long long dep){
    if(i>e||j<b){
        return 0;
    }
    if(b>=i&&e<=j){
        return tree[node];
    }
    long long l = node*2;
    long long r = node*2+1;
    long long m = (b+e)/2;
    long long p1 = query(b, m, l, i, j, dep-1);
    long long p2 = query(m+1, e, r, i, j, dep-1);
    if(dep%2) return p1|p2;
    else return p1^p2;
}

void update(long long b, long long e, long long node, long long i, long long nv, long long dep){
    if(i>e||i<b){
        return;
    }
    if(b>=i&&e<=i){
        tree[node] = nv;
        return;
    }
    long long l = node*2;
    long long r = node*2+1;
    long long m = (b+e)/2;
    update(b, m, l, i, nv, dep-1);
    update(m+1, e, r, i, nv, dep-1);
    if(dep%2) tree[node] = tree[l]|tree[r];
    else tree[node] = tree[l]^tree[r];
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    c = 1;
    for(i=1;i<=(c<<n);i++){
        cin >> ara[i];
    }
    init(1,(c<<n),1, n);
    while(m--){
        cin >> a >> b;
        update(1, (c<<n), 1, a, b, n);
        cout << tree[1] <<endl;
    }
    return 0;
}













