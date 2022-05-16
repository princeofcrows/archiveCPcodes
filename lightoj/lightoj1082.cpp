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
string star[200000], str, str1, str2;
long long ara[100005], tree[1000005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;

void init(long long node, long long b, long long e){
    if(b==e){
        tree[node] = ara[b];
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = min(tree[left], tree[right]);
}

long long query(long long node, long long b, long long e, long long i, long long j){
    if(i>e||j<b) return 9999999999;
    if(b>=i && e<=j) return tree[node];
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    long long f = query(left, b, mid, i, j);
    long long l = query(right, mid+1, e, i, j);
    return min(f, l);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    scanf("%lld", &t);
    d = 1;
    while(t--){
        scanf("%lld%lld", &n , &l);
        for(i=1;i<=n;i++){
            scanf("%lld", &ara[i]);
        }
        init(1, 1, n);
        printf("Case %lld:\n", d++);
        while(l--){
            scanf("%lld%lld", &i , &j);
            printf("%lld\n", query(1, 1, n, i, j));
        }
    }
    return 0;
}
