//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x[2005];
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> t;
        x[t].push_back(i);
    }
    ans = 0;
    for(i=1;i<2001;i++){
        if(x[i].size()>1){
            ans += x[i].size();
            y.push_back(i);
        }
    }
    if(ans<3){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for(j=0;j<3;j++){
        for(i=1;i<2001;i++){
            if(x[i].size()){
                for(l=0;l<x[i].size();l++){
                    cout << x[i][l]+1 <<" ";
                }
                if(j<y.size()&&y[j]==i){
                    next_permutation(x[i].begin(), x[i].end());
                }
                else if(x[i].size()>2){
                    next_permutation(x[i].begin(), x[i].end());
                }
            }
        }
        cout << endl;
    }
    return 0;
}




















