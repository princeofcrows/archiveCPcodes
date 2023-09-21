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
long long ara[100005], ai[100005], aj[100005], ax[100005];
struct dat{
    long long prop, sum;
} tree[1000005];

void init(long long node, long long b, long long e){
    if(b==e){
        tree[node].sum = ara[b];
        tree[node].prop = 0;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = max(tree[left].sum, tree[right].sum);
    tree[node].prop = tree[left].prop + tree[right].prop;
}

long long query(long long node, long long b, long long e, long long i, long long j, long long carry){
    if(i>e||j<b) return 0;
    if(b>=i && e<=j) return tree[node].sum + carry;
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    long long f = query(left, b, mid, i, j, carry+tree[node].prop);
    long long l = query(right, mid+1, e, i, j, carry+tree[node].prop);
    return max(f,l);
}

void update(long long node, long long b, long long e, long long i, long long j, long long val){
    if(i>e||j<b) return;
    if(b>=i && e<=j){
        tree[node].sum += val;
        tree[node].prop += val;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    update(left, b, mid, i, j, val);
    update(right, mid+1, e, i, j, val);
    tree[node].sum = max(tree[left].sum , tree[right].sum) + tree[node].prop;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    scanf("%lld%lld", &n , &l);
    for(i=1;i<=n;i++){
        ara[i] = 0;
    }
    init(1, 1, n);
    for(i=0;i<l;i++){
        scanf("%lld%lld%lld", &ai[i], &aj[i], &ax[i]);
        update(1, 1, n, ai[i], aj[i], ax[i]);
    }
    a = 999999999999999;
    for(i=0;i<l;i++){
        update(1, 1, n, ai[i], aj[i], -ax[i]);
        a = min(a, tree[1].sum);
        update(1, 1, n, ai[i], aj[i], ax[i]);
    }
    cout << a ;
    return 0;
}














