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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    for(i=1;i<=12;i++){
        if(12%i==0) x.push_back(i);
    }
    while(t--){
        cin >> str;
        ab.clear();
        for(i=0;i<x.size();i++){
            a = x[i];
            b = 12/x[i];
            dat.clear();
            for(j=0;j<12;j++){
                str1+=str[j];
                if((j+1)%b==0){
                    dat.push_back(str1);
                    str1.clear();
                }
            }
            for(j=0;j<b;j++){
                for(l=0;l<dat.size();l++){
                    if(dat[l][j]!='X') break;
                }
                if(l==dat.size()){
                    ab.push_back({a, b});
                    break;
                }
            }
        }
        cout << ab.size() <<" ";
        for(i=0;i<ab.size();i++){
            cout << ab[i].first<<"x"<<ab[i].second<<" ";
        }
        cout << endl;
    }
    return 0;
}




















