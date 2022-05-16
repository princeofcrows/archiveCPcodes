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
            ara[i] = 0;
        }
        init(1, 1, n);
        printf("Case %lld:\n", d++);
        while(l--){
            scanf("%lld%lld%lld", &a, &i , &j);
            if(a) {
                printf("%lld\n", query(1, 1, n, i+1, j+1, 0));
            }
            else {
                scanf("%lld", &a);
                update(1, 1, n, i+1, j+1, a);
            }
        }
    }
    return 0;
}
