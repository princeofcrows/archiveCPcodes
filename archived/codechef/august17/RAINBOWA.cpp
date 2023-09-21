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

long long ara[105];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        c = 0;
        i = 0; j = n-1;
        d = 1;
        while(i<=j){
            if(ara[i]!=d){
                d++;
                if(d>7){
                    c = 1;
                    break;
                }
            }
            if((ara[i]!=d)||(ara[j]!=d)){
                c = 1;
                break;
            }
            i++; j--;
        }
        if(d!=7) c = 1;
        if(c) cout << "no";
        else cout << "yes";
        cout << "\n";
    }
    return 0;
}













