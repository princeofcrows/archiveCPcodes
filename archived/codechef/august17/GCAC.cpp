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

long long mins[1005], offs[1005], maxj[1005], qual[1005][1005], ara[1005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=1;i<=n;i++){
            cin >> mins[i];
        }
        for(i=1;i<=m;i++){
            cin >> offs[i] >> maxj[i];
        }
        for(i=1;i<=n;i++){
            cin >> str;
            for(j=1;j<=m;j++){
                qual[i][j] = (str[j-1]-'0');
            }
        }
        memset(ara, 0, sizeof ara);
        a = b = c = 0;
        for(i=1;i<=n;i++){
            ans = 0; d = 0;
            for(j=1;j<=m;j++){
                if(qual[i][j]){
                    if(offs[j]>=mins[i]){
                        if(ara[j]<maxj[j]){
                            if(ans<offs[j]){
                                d = j;
                                ans = offs[j];
                            }
                        }
                    }
                }
            }
            b+=ans;
            if(d){
                a++;
                ara[d]++;
            }
        }
        for(i=1;i<=m;i++){
            if(!ara[i]) c++;
        }
        cout << a << " " << b << " " << c <<endl;
    }
    return 0;
}













