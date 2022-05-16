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

string star[200000], str, str1;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l;
    cin >> t;
    c = 1;
    while(t--){
        cin >> n;
        x.clear();
        for(i=0;i<n;i++){
            cin >> temp;
            x.push_back(temp);
        }
        for(i=11;i<=20;i++){
            a = b = 0;
            for(j=0;j<n;j++){
                if(x[j]>i) a++;
                if(x[j]<i) b++;
            }
            if(a==b) break;
        }
        printf("Case %lld: %lld\n", c++, i);
    }
    return 0;
}







