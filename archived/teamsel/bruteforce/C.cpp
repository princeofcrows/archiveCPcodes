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
vector < pair <long long, long long> > ab(1005);
vector < vector <long long> > x(1005);
vector < vector <long long> > y(1005);
map <string, long long> dat;
long long d, bgt;

bool chk(long long m){
    long long a, b;
    b = 0;
    for(long long i=1;i<d;i++){
        a = bgt+1;
        for(long long j=0;j<x[i].size();j++){
            if(y[i][j]>=m){
                a = min(a, x[i][j]);
            }
        }
        b += a;
    }
    if (bgt>=b){
        return true;
    }
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n >> bgt;
        d = 1;
        for(i=0;i<=1001;i++){
            x[i].clear();
            y[i].clear();
        }
        dat.clear();
        for(i=0;i<n;i++){
            cin >> str >> str1 >> a >> b;
            if(!dat[str]){
                dat[str] = d;
                d++;
            }
            j = dat[str];
            x[j].push_back(a);
            y[j].push_back(b);
        }
        l = 0;
        h = 100000000000;
        ans = 0;
        while(l<=h){
            m = (l+h)/2;
            if(chk(m)){
                l = m+1;
                ans = m;
            }
            else {
                h = m-1;
            }
        }
        c = 0;
        for(i=max(c, h-10);i<=h+10;i++){
            if(!chk(i)){
                ans = i-1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}







