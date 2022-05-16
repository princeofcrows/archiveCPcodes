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

long long ara[100005], cm[100005], mod;
struct comr{
    long long t, l, r;
};
comr mc[100005];

struct dat{
    long long prop, sum;
} tree[1000005];


void init(long long node, long long b, long long e){
    if(b==e){
        tree[node].sum = 1;
        tree[node].prop = 0;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = (tree[left].sum + tree[right].sum)%mod;
    tree[node].prop = tree[left].prop + tree[right].prop;
}

long long query(long long node, long long b, long long e, long long i, long long j, long long carry){
    if(i>e||j<b) return 0;
    if(b>=i && e<=j) return (tree[node].sum + carry*(e-b+1))%mod;
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    long long f = query(left, b, mid, i, j, carry+tree[node].prop);
    long long l = query(right, mid+1, e, i, j, carry+tree[node].prop);
    return (f+l)%mod;
}

void update(long long node, long long b, long long e, long long i, long long j, long long val){
    if(i>e||j<b) return;
    if(b>=i && e<=j){
        tree[node].sum += (e-b+1)*val;
        tree[node].prop += val;
        tree[node].sum %= mod;
        tree[node].prop %= mod;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    update(left, b, mid, i, j, val);
    update(right, mid+1, e, i, j, val);
    tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
    tree[node].sum %= mod;
}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    mod = 1000000007;
    while(t--){
        cin >> n >> m;
        memset(ara, 0, sizeof ara);
        init(1, 1, m);
        for(i=1;i<=m;i++){
            cin >> mc[i].t >> mc[i].l >> mc[i].r;
        }
        for(i=m;i>=1;i--){
            if(mc[i].t==2){
                a = query(1, 1, m, i, i, 0);
                update(1, 1, m, mc[i].l, mc[i].r, a%mod);
            }
        }
        for(i=1;i<=m;i++){
            if(mc[i].t==1){
                a = query(1, 1, m, i, i, 0);
                ara[mc[i].l]+=a;
                ara[mc[i].r+1]-=a;
                ara[mc[i].l]%=mod;
                ara[mc[i].r+1]%=mod;
            }
        }
        for(i=1;i<=n;i++){
            ara[i] += ara[i-1];
            ara[i]%=mod;
            if(ara[i]<0) ara[i]+=mod;
            cout << ara[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}













