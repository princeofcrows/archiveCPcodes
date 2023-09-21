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
vector < pair <long long, long long> > ab;
long long ara[100005], ara2[100005], s[100005];
long long tree[500005], sqt;
struct query{
    long long L, R, ind;
};
query q[50005];

bool compare(query x, query y){
    if(x.L/sqt!=y.L/sqt){
        return x.L/sqt<y.L/sqt;
    }
    return x.R<y.R;
}

void result(long long n, long long m){
    sqt = sqrt(n);
    sort(q, q+m, compare);
    long long cl, cr, cnt;
    cl = cr = cnt = 0;
    for(long long i=0;i<m;i++){
        long long L = q[i].L;
        long long R = q[i].R;
        while(cl<L){
            s[ara[cl]]--;
            if(s[ara[cl]]==0) cnt--;
            cl++;
        }
        while(cl>L){
            s[ara[cl-1]]++;
            if(s[ara[cl-1]]==1) cnt++;
            cl--;
        }
        while(cr<=R){
            s[ara[cr]]++;
            if(s[ara[cr]]==1) cnt++;
            cr++;
        }
        while(cr>R+1){
            s[ara[cr-1]]--;
            if(s[ara[cr-1]]==0) cnt--;
            cr--;
        }
        ara2[q[i].ind] = cnt;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x;
    scanf("%lld", &t);
    d = 1;
    while(t--){
        scanf("%lld%lld", &n, &m);
        printf("Case %lld:\n", d++);
        for(i=0;i<n;i++) {
            scanf("%lld", &ara[i]);
        }
        for(i=0;i<=100000;i++) {
            s[i] = 0;
        }
        for(i=0;i<m;i++){
            scanf("%lld%lld", &a, &b);
            q[i].L = a-1;
            q[i].R = b-1;
            q[i].ind = i;
        }
        result(n, m);
        for(i=0;i<m;i++){
            printf("%lld\n", ara2[i]);
        }
    }
    return 0;
}














