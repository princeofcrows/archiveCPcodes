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
long long ara[1005][1005];
long long tree[1005][1005];

long long query(long long x, long long y){
    //cout << x <<" "<<y<<" "<<x2<<" "<<y2<<endl;
    long long sum = 0;
    while(x>0){
        long long ty = y;
        while(ty>0){
            sum += tree[x][ty];
            ty -= (ty&-ty);
        }
        x -= (x&-x);
    }
    return sum;
}
void update(long long x, long long y){
    while(x<=1001){
        long long ty = y;
        while(y<=1001){
            tree[x][y]++;
            y += (y&-y);
        }
        x += (x&-x);
        y = ty;
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    scanf("%lld", &t);
    d = 1;
    while(t--){
        memset(tree, 0, sizeof tree);
        memset(ara, 0, sizeof ara);
        scanf("%lld", &n);
        printf("Case %lld:\n", d++);
        while(n--){
            scanf("%lld", &s);
            if(s==0){
                scanf("%lld%lld", &a, &b);
                a++; b++;
                if(ara[a][b]==0){
                    update(a, b);
                    ara[a][b] = 1;
                }
            }
            else{
                scanf("%lld%lld%lld%lld", &a, &c, &b, &l);
                b++; l++;
                ans = query(b, l) + query(a, c) - query(b, c) - query(a, l);
                printf("%lld\n", ans);
            }
        }
    }
    return 0;
}














