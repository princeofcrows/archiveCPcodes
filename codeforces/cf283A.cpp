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
long long ara[200005], ara2[200005], dek[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
stack <long long> stk;
vector <long long> g[100005];
vector <long long> rg[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, mn, c, a, b, mx, d, k, l, f;
    cin >> n;
    double ele = 1;
    double sum = 0;
    j = 1;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    for(i=1;i<=n;i++){
        cin >> a;
        if(a==1){
            cin >> b >> c;
            ara[b] += c;
            sum += (b*c)*1.0;
        }
        else if(a==2){
            cin >> b;
            ara2[++j] = b;
            sum += b*1.0;
            ele += 1.0;
        }
        else{
            sum -= ara2[j]*1.0;
            ara2[j] = 0;
            sum -= (ara[j]*1.0);
            ara[j-1]+= ara[j];
            ara[j] = 0;
            ele -= 1.0;
            j--;
        }
        printf("%.8lf\n", sum/ele);

    }
    return 0;
}







