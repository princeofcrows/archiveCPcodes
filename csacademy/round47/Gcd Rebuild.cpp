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
long long ara[305][305], ara2[300005], ara3[300005];
vector <long long> x;
vector <long long> y;
map <char, bool> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c, m;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> ara[i][j];
        }
    }
    for(i=0;i<n;i++){
        a = 1;
        for(j=0;j<m;j++){
            c = __gcd(a, ara[i][j]);
            a = a*ara[i][j]/c;
        }
        if(a>1000000000){
            cout << -1;
            return 0;
        }
        x.push_back(a);
    }
    for(i=0;i<m;i++){
        a = 1;
        for(j=0;j<n;j++){
            c = __gcd(a, ara[j][i]);
            a = a*ara[j][i]/c;
        }
        if(a>1000000000){
            cout << -1;
            return 0;
        }
        y.push_back(a);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(__gcd(x[i], y[j])!=ara[i][j]){
                cout << -1;
                return 0;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << x[i] <<" ";
    }
    cout << endl;
    for(i=0;i<m;i++){
        cout << y[i] <<" ";
    }

    return 0;
}





















